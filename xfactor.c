#include <stdio.h>
#include<string.h>
#include <stdlib.h>

/*
 * “x factor” è un nuovo metodo di cifrare una stringa. La decodifica è semplice:
        1. per ogni occorrenza del carattere x (minuscolo) viene eliminata la x e il carattere successivo
        2. ma nel caso di due x consecutive, allora viene tenuta una sola delle due
        3. in tutti gli altri casi non si effettuano modifiche.
Scrivere una funzione che data una stringa restituisce una nuova stringa con la sua decodifica.
 */

char* decode(char* s) {

    char* res = (char*) malloc(strlen(s) * sizeof(char));
    char* src = s, *dst = res;

    while(*src != '\0'){
        if(*src == 'x' && *(src+1) == 'x'){
            *dst = 'x';
            dst++;
            src += 2;
        } else if(*src == 'x' && *(src+1) != 'x'){
            src += 2;
        } else {
            *dst = *src;
            src++;
            dst++;
        }
    }
    *dst = '\0';
    return res;
}

int main(){
    char *s = "xzxyexxcerptxo";
    printf("%s ", decode(s) );
    return 0;
}