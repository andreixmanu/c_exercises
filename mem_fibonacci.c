#include <stdio.h>

/*
 * Modifica la funzione ricorsiva di Fibonacci in modo che memorizzi i
 * risultati già calcolati per evitare di ricalcolarli. Utilizza un array
 * o una struttura dati appropriata per la memorizzazione.
 */

#include <stdio.h>

int fibonacci_rec(int n, int a, int b) {
    if (n == 1) return a;

    // Calcola il prossimo termine nella sequenza
    int next = a + b;

    // Chiamata ricorsiva avanzando nella sequenza
    return fibonacci_rec(n - 1, b, next);
}

// Wrapper
int fibonacci(int n) {
    if (n <= 0) return -1; // Aggiunto controllo per n <= 0

    // Inizializza la sequenza con i primi due termini
    return fibonacci_rec(n, 0, 1);
}

int main() {
    for (int i = 1; i <= 10; ++i) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
