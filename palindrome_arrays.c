#include <stdio.h>

/*
 * Scrivere una funzione palindromo che, dati due array di interi A e B aventi la stessa lunghezza diversa da
zero, restituisca il valore 1 se il primo array contiene gli stessi elementi del secondo in ordine inverso, e
restituisca 0 altrimenti
 */

int palindromo(int* A, int* B, int size){
    for(int i = 0; i < size; i++)
        if(A[i] != B[size-1-i]) return 0;
    return 1;
}

int main(){
    int A[] = { 10, 20, 30, 40, 50 };
    int B[] = { 50, 40, 30, 20, 10 };
    int C[] = { 50, 40, 10, 20, 30 };

    printf("%d \n", palindromo( A, B, 5) );
    printf("%d \n", palindromo( A, C, 5) );
    return 0;
}
