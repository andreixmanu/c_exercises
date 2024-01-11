#include <stdio.h>
#include <string.h>
#include <malloc.h>

/*
 * Scrivere una funzione drop che date due stringhe restituisce una nuova stringa ottenuta rimuovendo dalla
prima tutte le lettere presenti nella seconda.
 */

char* drop(char* a, char* b){

    int a_len = strlen(a), b_len = strlen(b), res_index = 0;
    char* res = (char*) malloc ((a_len-1));
    for(int i = 0; i < a_len; i++){
        int found = 0;
        for(int j = 0; j < b_len; j++){
            if(a[i] == b[j]){
                found = 1;
                break;
            }
        }
        if(found == 0) {
            res[res_index] = a[i];
            res_index++;
        }
    }
    return res;
}

int main(){
    char *a = "!p###la#!y!in#g!";
    char *b = "!#";
    char* res = drop(a,b);
    printf( "%s \n", res );
    return 0;
}