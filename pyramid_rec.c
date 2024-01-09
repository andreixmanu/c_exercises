#include <stdio.h>

/*
 * Scrivi una funzione ricorsiva per stampare i numeri da 1 a N in ordine crescente e poi in ordine decrescente.
 */

void stampaCrescenteDecrescente(int N, int start) {
    if (start <= N) {
        // Stampa in ordine crescente
        printf("%d ", start);

        // Chiamata ricorsiva con start + 1
        stampaCrescenteDecrescente(N, start + 1);

        // Stampa in ordine decrescente
        if (start < N) {
            printf("%d ", start);
        }
    }
}

int main(){
    stampaCrescenteDecrescente(5, 1);
    return 0;
}