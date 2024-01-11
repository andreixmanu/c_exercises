#include <stdio.h>

/*
 * Scrivere una funzione ricorsiva che dati due array conteggi il numero di volte che il primo array appare nel
secondo.
 */

int count_array(int arr1[], int lunghezza1, int arr2[], int lunghezza2) {
    // Caso base: se la lunghezza del secondo array è minore di quella del primo, non può comparire
    if (lunghezza2 < lunghezza1) {
        return 0;
    }

    int sonoUguali = 1;
    for (int i = 0; i < lunghezza1; i++) {
        if (arr1[i] != arr2[i]) {
            sonoUguali = 0;
            break;
        }
    }

    if (sonoUguali) {
        return 1 + count_array(arr1, lunghezza1, arr2 + 1, lunghezza2 - 1);
    } else {
        return count_array(arr1, lunghezza1, arr2 + 1, lunghezza2 - 1);
    }
}

int main() {
    int array1[] = {1, 2, 3};
    int array2[] = {1, 2, 3, 4, 1, 2, 3, 5, 6};

    int lunghezza1 = sizeof(array1) / sizeof(array1[0]);
    int lunghezza2 = sizeof(array2) / sizeof(array2[0]);

    int risultato = count_array(array1, lunghezza1, array2, lunghezza2);

    printf("Il primo array appare nel secondo array %d volte.\n", risultato);

    return 0;
}