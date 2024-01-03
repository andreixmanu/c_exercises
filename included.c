#include <stdio.h>

/*
 * Scrivere una funzione incluso che, dati due array di interi A e B di lunghezza diversa da zero, restituisca il
valore 1 se gli elementi del primo array sono tutti contenuti nel secondo in qualsiasi ordine, e restituisca 0
altrimenti.
 */

int incluso(int* A, int A_size, int* B, int B_size){
    for(int i = 0; i < A_size; i++){
        int found = 0;
        for(int j = 0; j < B_size; j++){
            if(A[i] == B[j]){
                found = 1;
                break;
            }
        }
        if(!found) return 0;
    }
    return 1;
}

int main(){
    int A[] = { 1,2,3 };
    int B[] = { 1,4,2,5,3 };
    int C[] = { 2,3,4,5,6 };

    printf("%d \n", incluso( A, 3, B, 5) );
    printf("%d \n", incluso( B, 5, C, 5) );
}
