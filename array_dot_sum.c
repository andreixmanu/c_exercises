#include <stdio.h>

/*
Scrivere una funzione dot che, dati due array di float A e B aventi la stessa lunghezza diversa da zero, resti‑
tuisca il prodotto interno tra i due vettori
*/

float dot(float* a, float* b, int size){
    float res = 0;
    for(int i = 0; i < size; i++)
        res += a[i] * b[i];
    return res;
}

int main() {
    float A[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    float B[5] = {6.0, 7.0, 8.0, 9.0, 10.0};

    printf("%f", dot(A, B, 5));

    return 0;
}