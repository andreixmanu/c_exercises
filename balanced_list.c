#include <stdio.h>

/*
 * Un lista si dice bilanciata se esiste un valore i tale per cui la somma dei primi i elementi della lista è pari alla
somma degli elementi rimanenti. Scrivere una funzione che, data una lista definita come segue, restituisca
1 se la lista è bilanciata e 0 altrimenti.
 */
typedef struct list {
    int data;
    struct list *next;
    } list_t;

int bilanciata(list_t* l){

    list_t* temp = l;
    int tot = 0, par = 0;

    //calcolo il valore totale della lista
    while(temp != NULL){
        tot += temp->data;
        temp = temp->next;
    }
    //reset del puntatore alla testa per il secondo ciclo
    temp = l;
    //calcolo dei valori parziali che puo avere la lista
    while(temp != NULL){
        par += temp->data;
        tot -= temp->data;
        if(par == tot) return 1;
        temp = temp->next;
    }
    return -1;
}

int main(){

    /* given that: l contains {1,10,2,4,5} */
    printf("%d \n", bilanciata(l) );

}