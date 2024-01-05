#include <stdio.h>

/*
 * Scrivere una funzione find che dato un array a trovi l’elemento massimo il cui quadrato è pari. Se non c’è
nessun elemento che soddisfa il criterio, la funzione restituisce ‑1.
 */

int find(const int* a, int size){
    int res = -1;
    for(int i = 0; i < size; i++)
        if((a[i] * a[i]) % 2 == 0){
            if(a[i] > res) res = a[i];
            if(res == -1) res = a[i];
        }
    return res;
}

int main(){
    int a[5] = { 1, 7, 3, 9, 11 };
    int b[5] = { 1, 7, 3, -80, -100};
    int result = find(b, 5);
    printf("%d", result);
    return 0;
}
