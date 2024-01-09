#include <stdio.h>

/*
 * Scrivi una funzione ricorsiva che conta quante volte una cifra specifica appare in un numero intero. Chiedi all'utente di inserire un numero e una cifra da contare.
 */

int occ_rec(int n, int m){
    if (n == 0) return 0;
    int pippo = n % 10;
    n /= 10;
    if(pippo == m) return 1+occ_rec(n, m);
    else return occ_rec(n, m);
}

int main(){
    printf("%d", occ_rec(1238126534,9));
    return 0;
}