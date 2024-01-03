#include <stdio.h>

/*
 * Chiamiamo una matrice quadrata A mirror se è sempre vero che la sua i‑esima riga è uguale alla i‑esima
colonna. Scrivere una funzione che data una matrice restituisca 1 se la matrice è mirror e 0 altrimenti.
 */

int mirror(const int* matrix, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(matrix[i * size + j] != matrix[j * size + i]) return 0;
        }
    }
    return 1;
}

int main(){
    int M[4][4] = { { 1, 2, 3, 4 },
                    { 2, 0, 0, 2 },
                    { 3, 0, 0, 2 },
                    { 4, 2, 2, 7 }, };
    printf("%d ", mirror( &(M[0][0]), 4) );
            return 0;
}