#include <stdio.h>
#include <stdlib.h>
/*
Scrivere una funzione che data una matrice di interi, restituisca una nuova matrice ottenuta ottenuta traspo‑
nendo la prima, ovvero invertendo righe e colonne come nell’esempio
*/

int* reverse_matrix(int* m, int rows, int cols){
    int* new_matrix = (int*)malloc(cols * rows * sizeof(int));
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            new_matrix[j * rows + i] = m[i * cols + j];
        }
    }
    return new_matrix;
}

int main() {
    
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    int* reverse = reverse_matrix(&(matrix[0][0]), 2, 3);
    
    //print_matrix(reverse, 3, 2);

    free(reverse);
    
    return 0;
}
