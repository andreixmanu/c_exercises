#include <stdio.h>
#include <stdlib.h>
/*
 * Scrivere una funzione che data una matrice rettangolare, restituisca la matrice risultante dalla rimozione
della prima e ultima riga e della prima e ultima colonna come nell’esempio sotto. (Assumiamo la matrice
abbia almeno 3 righe e 3 colonne.)
 */

int* peel_matrix(int* matrix, int rows, int cols){
    int* res = (int*) malloc((rows-2)*(cols-2) * sizeof(int));
    int x = 0, y = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(j == 0 || j == cols-1) continue;
            res[y * (cols-2) + x] = matrix[i * cols + j];
            x++;
        }
        if(i == 0 || i == rows-1) continue;
        y++;
        x = 0;
    }
    return res;
}

int main(){
    int matrice[5][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16},
            {17, 18, 19, 20}
    };

    printf("Matrice originale:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }

    int* matrix2 = peel_matrix(&(matrice[0][0]), 5, 4);

    printf("\nMatrice dopo la rimozione dei bordi:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix2[i * 2 + j]);
        }
        printf("\n");
    }
    free(matrix2);
    return 0;
}
