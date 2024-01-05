#include <stdio.h>

/*
 * Scrivere una funzione p che dato un intero n, dove n > 0, calcoli con un ciclo iterativo l’elemento n‑esimo
della sequenza così definita matematicamente:
 p(n) = 1 se 0 < n <= 2
      = 2 se 2 < n <= 4
      = p(n-1) + 3p(n-2) - 2p(n-4)
 */

int sequence(int n){
    if(n <= 2 && n > 0) return 1;
    if(n <= 4 && n > 2) return 2;
    int p = 2, p1 = 2, p2 = 1, p3 = 1, p4;
    for(int i = 5; i <= n; i++){
        p4 = p3;
        p3 = p2;
        p2 = p1;
        p1 = p;
        p = p1 + 3*p2 - 2*p4;
    }
    return p;
}

int main(){
    int res = sequence(7);
    printf("%d", res);
    return 0;
}
