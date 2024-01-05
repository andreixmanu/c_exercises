#include <stdio.h>

/*
 * Dato un array a di lunghezza size, chiamiamo k‑rotazione di a l’array che si ottiene “spostando” gli ultimi k,
con 0 ≤ k < size elementi dell’array nelle prime posizioni e spostando gli altri elementi alla fine dell’array.
Scrivere una funzione rotated che dati due array di interi positivi a e b della stessa lunghezza, restituisca
il valore k per il quale b si può ottenere tramite una k‑rotazione di a, e restituisca -1 se invece non esiste un
k per cui b è una k‑rotazione di a.
 */

int equal_arrays(int* a, int*b, int size){
    for(int i = 0; i < size; i++)
        if(a[i] != b[i]) return 0;
    return 1;
}

int rotated(int* a, int*b, int size){
    for(int i = 0; i < size; i++){
        //sposto a[size-1] su a[0]
        int temp = a[size-1];
        for(int j = size-1; j >= 0; j--){
            a[j] = a[j-1];
        }
        a[0] = temp;
        if(equal_arrays(a, b, size)) return i+1;
    }
    return -1;
}

int main(){
    int a[5] = { 1, 2, 3, 4, 5 };
    int b[5] = { 3, 4, 5, 2, 1 };
    int result = rotated(a, b, 5);
    printf("%d", result);
    return 0;
}