#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Scrivere una funzione che data una stringa restituisca una nuova stringa contenente solo le sotto‑stringhe
racchiuse tra parentesi tonde. Assumiamo che le parentesi siano corrette e che non siano annidate.
*/

char * parentesi( char *s ){
    char* res = (char*) malloc(strlen(s) +1);
    int keep = 0;
    char* dest = res;
    while(*s){
        if(*s == '(')
            keep = 1;
        else if(*s == ')')
            keep = 0;
        else if(keep == 1){
            *(dest++) = *s;
        }
    }
    *(dest++) = '\0';
    res = realloc(res, dest-res);
    return res;
}

int main() {
    // Your code here
    char * a = "(I ) do not (Love ) wasting my time at (Coding) badly";
    printf("%s\n", parentesi( a ) );
    return 0;
}
