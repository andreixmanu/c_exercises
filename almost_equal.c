#include <stdio.h>

/*
 * Scrivere una funzione quasi_uguali che, dati due array di interi A e B aventi la stessa lunghezza diversa
da zero, restituisca il valore 1 se il primo array contiene gli stessi elementi del secondo incrementati di 1, e
restituisca 0 altrimenti
 */

int quasi_uguali(int* A, int* B, int size){
    for(int i = 0; i < size; i++)
        if(A[i] != B[i] + 1) return 0;
    return 1;
}

int main(){
    int A[] = { 2,3,4,5,6 };
    int B[] = { 1,2,3,4,5 };
    int C[] = { 2,3,4,5,6 };

    printf("%d \n", quasi_uguali( A, B, 5) );
    printf("%d \n", quasi_uguali( A, C, 5) );
}
