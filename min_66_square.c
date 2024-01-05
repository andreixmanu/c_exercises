#include <stdio.h>

/*
 *  Scrivere una funzione find che dato un array a trovi l’elemento minimo il cui quadrato è maggiore di 66. Se
    non c’è nessun elemento che soddisfa il criterio, la funzione restituisce ‑1.
 */

int find(const int* a, int size){
    int res = -1;
    for(int i = 0; i < size; i++){
        if((a[i] * a[i]) > 66){
            if(res == -1) res = a[i];
            if(a[i] < res) res = a[i];
        }
    }
    return res;
}

int main(){
    int a[5] = { 7, 8, 10, 9, 12 };
    int result = find(a, 5);

    int b[5] = { 1, 2, 3, 4, 5 };
    int result2 = find(b, 5);

    int c[5] = { 7, 8, 10, 9, -100 };
    int result3 = find(c, 5);

    printf("%d\n", result);
    printf("%d\n", result2);
    printf("%d\n", result3);
}
