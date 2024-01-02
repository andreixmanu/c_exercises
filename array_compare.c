#include <stdio.h>

/*
Scrivere una funzione che, dati due array di interi A e B aventi la stessa lunghezza diversa da zero, resti‑
tuisca -1 se A[i]<=B[i] per tutte le posizioni i, restituisca 1 se A[i]>B[i] per tutte le posizioni i,e0
altrimenti.
*/

int array_compare(int* a, int* b, int size){
    int less_equal = 1, more = 1;
    
    for(int i = 0; i < size; i++){
        less_equal = less_equal && a[i] <= b[i];
        more = more && a[i] > b[i];
        if(!more && !less_equal) return 0;
    }

    if(more) return 1;
    if(less_equal) return -1; 
}

int main() {
    // Your code here
    int W[] = {2,4,7,6,5};
    int X[] = {1,2,3,4,5};
    int Y[] = {6,7,8,9,5};
    int Z[] = {1,3,5,3,1};

    printf("%d \n", array_compare( X, Y, 5) );
    printf("%d \n", array_compare( Y, X, 5) );
    printf("%d \n", array_compare( W, Z, 5) );
    printf("%d \n", array_compare( X, Z, 5) );

    return 0;
}
