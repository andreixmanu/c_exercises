#include <stdio.h>

/*
 * Dato un vettore di interi jump, chiamiamo visita a salti il seguente procedimento. Seleziono una posizione
i e se jump[i] è uguale a -1 mi fermo, altrimenti “salto” all’elemento in posizione jump[i] e ripeto il
procedimento. Scrivere una funzione max_jump che restituisca la posizione iniziale che genera il massimo
numero di salti.
 */

int max_jump(const int *a, int a_size) {
    int max_jumps = 0, position = 0;
    for (int i = 0; i < a_size; i++) {
        int temp_jumps = 0;
        int j = i;
        while (a[j] != -1) {
            temp_jumps++;
            j = a[j];
        }
        if (temp_jumps > max_jumps) {
            max_jumps = temp_jumps;
            position = i;
        }
    }
    return position;
}

int main() {
    int jump[6] = { 1, -1, 3, 4, 5, 0 };
    int result = max_jump(jump, 6);
    printf("%d", result);
    return 0;
}
