#include <stdio.h>

/*
 * Dati due array di interi positivi a e pattern, vogliamo sapere se esistono dei sotto‑array di a esattamente
uguali a pattern; valgono anche le sovrapposizioni parziali, come si vede nell’esempio. Scrivere una fun‑
zione count che restituisce il numero di occorrenze di pattern in a
 */

int count(const int* pattern, int pattern_size, const int* a, int a_size){
    int res = 0;
    for(int i = 0; i < a_size; i++){
        for(int j = 0; j < pattern_size; j++){
            if(pattern[j] != a[i + j]) break;
            if(j == pattern_size-1) res++;
        }
    }
    return res;
}

int main(){
    int pattern[3] = { 1, 0, 1 };
    int a[8] = { 5, 0, 1, 0, 1, 0, 1, 5 };
    int result = count(pattern, 3, a, 8);
    printf("%d", result);
    return 0;
}