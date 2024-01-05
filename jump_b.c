#include <stdio.h>

/*
 * Dato un vettore di interi jump, chiamiamo visita a salti il seguente procedimento. Seleziono una posizione
i e se jump[i] è uguale a -1 mi fermo, altrimenti “salto” all’elemento in posizione jump[i] e ripeto il
procedimento. Siamo in presenza di un cerchio se partendo dalla posizione i ad un certo punto torniamo
alla posizione i. Scrivere una funzione circles che conta il numero di posizioni iniziali che generano dei
cerchi.
 */

int circles(const int* a, int a_size){
    int circles = 0;
    for(int i = 0; i < a_size; i++){
        int j = i;
        while (a[j] != -1){
            j = a[j];
            if(j == i) {
                circles++;
                break;
            }
        }
    }
    return circles;
}

int main(){
    int jump[6] = { 1, -1, 3, 4, 5, 0 };
    int result = circles(jump, 6);
    printf("%d", result);
    return 0;
}
