#include <stdio.h>

/*
Una matrice si dice dominata se ogni elemento è minore di tutti gli altri elementi nelle colonne successive
della sua stessa riga. Scrivere una funzione dominata che data una matrice restituisce 1 se questa è domi‑
nata e 0 altrimenti.
*/

int dominata( int *M, int n_rows, int n_cols ){

    for(int i = 0; i < n_rows; i++){
        for(int j = 0; j < n_cols; j++){
            if(j == n_cols -1) continue;
            if(M[i * n_cols + j] > M[i * n_cols + j + 1]) return 0;
        }
    }
    return 1;
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 1}, {4, 7, 9} };

    int matrix2[2][3] = {{1, 2, 3}, {1, 5, 9} };

    printf("%d\n", dominata( &(matrix[0][0]), 3, 3) );
    printf("%d\n", dominata( &(matrix2[0][0]), 2, 3) );

    return 0;
}