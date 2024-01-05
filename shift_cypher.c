#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Scrivere una funzione che data una stringa ne restituisce la versione decodificata secondo l’algoritmo seguente.
    1. leggo la stringa s da sinistra a destra
    2. se trovo il simbolo <, questo viene rimosso e il carattere successivo viene posto all’inizio della stringa
       decodificata
    3. Ogni altro simbolo resta invariato nella stringa decodificata
 */

char *shift(char *s) {

    char *src = s;
    int n_shifts = 0;

    while(*src != '\0'){
        if(*src == '<') n_shifts++;
        src++;
    }

    char *res = (char *) malloc((strlen(s) - n_shifts) * sizeof(char)+1);
    if(!res) exit(1);

    src = s;
    int l = n_shifts-1, r = n_shifts;

    while (*src != '\0') {
        if (*src == '<') {
            ++src;
            res[l--] = *src;
        } else {
            res[r++] = *src;
        }
        src++;
    }
    res[r] = '\0';
    return res;
}

int main() {
    char *s = "gram<o<r<pming";
    printf("%s ", shift(s));
    return 0;
}