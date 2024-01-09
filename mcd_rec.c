#include <stdio.h>

/*
 * Scrivi una funzione ricorsiva per calcolare il Massimo Comun Divisore di due numeri interi.
 */

int mcd_rec(int a, int b, int cnt) {
    if (cnt > a && cnt > b) return -1;
    if ((a % cnt == 0) && (b % cnt == 0)) return cnt;
    else return mcd_rec(a, b, cnt + 1);
}

int main(){
    printf("%d", mcd_rec(3, 5, 2));
    return 0;
}