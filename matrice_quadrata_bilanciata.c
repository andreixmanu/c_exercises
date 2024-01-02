#include <stdio.h>

/*
Una matrice quadrata è detta bilanciata se la somma degli elementi al di sopra della diagonale principale
è pari alla somma degli elementi al di sotto della diagonale principale. Scrivere una funzione che data una
matrice quadrata di interi A restituisca true se questa è bilanciata e false altrimenti.
*/

int tri_bil(int *a, int n){
    int sup = 0, inf = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j<n;j++){
            if(i > j) inf += a[i * n + j];
            else if(i < j) sup += a[i * n + j];
        }
    }
    return inf == sup;
}

int main() {
    // Your code here
    int M[3][3] = { {1,10,20},
                    {20, 2, 30},
                    {20, 20, 3} };
    printf("%d\n", tri_bil( &(M[0][0]), 3) );
    return 0;
}
