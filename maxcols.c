#include <stdio.h>
#include <stdlib.h>
/*
 * Scrivere una funzione che data una matrice di interi rettangolare A restituisca un nuovo vettore che in po‑
sizione i‑esima contenga il massimo degli elementi nella i‑esima colonna della matrice A.
 */

int* maxcols(int* matrix, int rows, int cols){
    int * res = (int*) malloc(cols * sizeof(int));
    for(int i = 0; i < cols; i++){
        int max = 0;
        for(int j = 0; j < rows; j++){
            if(matrix[j * cols + i] > max) max = matrix[j * cols + i];
        }
        res[i] = max;
    }
    return res;
}

int main(){
    int M[3][5] = { {1,2,33,4,5},
                    {4,5,6,10,20},
                    {11,12,13,14,15} };

    int *m = maxcols(&M[0][0], 3, 5);
    for (int i=0; i<5; i++)
        printf("%d ", m[i]);
    free(m);
    return 0;
}
