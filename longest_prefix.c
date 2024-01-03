#include <stdio.h>
#include <string.h>
/*
 * Dato un array di stringhe, scrivere una funzione che restituisce la lunghezza del prefisso comune più lungo.
 */

int prefix(char* a[], int strings_count){
    int longest = strlen(a[0]);
    for(int i = 1; i < strings_count; i++){
        int other_len = strlen(a[i]);
        int longest_new = 0;
        while(  longest_new < longest &&
                longest_new < other_len &&
                a[0][longest_new] == a[i][longest_new]){
            longest_new++;
        }
        longest = longest_new;
    }
    return longest;
}

int main(){

    char* words1[] = {"Velocissimo", "Velociraptor", "Velcro"};
    char* words2[] = {"Cattura", "Cacca", "Caterpillar"};
    printf("%d\n", prefix(words1, 3) );
    printf("%d\n", prefix(words2, 3) );

    return 0;
}