#include <stdio.h>

/*
Dato un array di array di interi (int**) e un vettore con le lughezze degli array, l’operazione di kick inserisce
il valore 0 all’inizio del primo array e fa slittare tutti gli altri elementi eliminando però l’ultimo elemento
dell’ultimo array
*/

void kick(int** AA, int AA_size, int* lens){

    for(int i = AA_size -1; i > 0; i--){
        for(int j = lens[i-1]; j > 0; j--)
            AA[i][j] = AA[i][j-1];
        AA[i][0] = AA[i-1][lens[i-1] -1];
    }
    for(int j = lens[0]-1; j > 0; j--)
        AA[0][j] = AA[0][j-1];
    AA[0][0] = 0;
}

int main() {

    int A0[] = {10,20,30};
    int A1[] = {40};
    int A2[] = {50, 60};
    
    int lens[] = {3,1,2};
    
    int *AA[3];
    
    AA[0] = A0;
    AA[1] = A1;
    AA[2] = A2;
    
    kick(AA, 3, lens);
    return 0;
}
