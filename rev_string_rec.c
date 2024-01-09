#include <stdio.h>
#include <string.h>
/*
 * Scrivi una funzione ricorsiva per invertire una stringa.
 */

char* rev_string_rec(char* s, int i, unsigned long size) {
    // Condizione di terminazione: quando raggiungi la fine della stringa
    if (i >= size / 2)
        return s;

    // Faccio lo swap tra s+i esimo e s_size - i esimo
    char temp = s[i];

    s[i] = s[size - i - 1];
    s[size - i - 1] = temp;

    // Chiamata ricorsiva avanzando nella stringa
    return rev_string_rec(s, i + 1, size);
}

//wrapper function
char* rev_string(char* string){
    unsigned long string_size = strlen(string);
    char* res = rev_string_rec(string, 0, string_size);
    return res;
}

int main(){
    char input[] = "pippo";

    printf("%s", rev_string(input));
}