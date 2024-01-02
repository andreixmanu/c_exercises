#include <stdio.h>

/*
Scrivere una funzione che data una lista di interi restituisca una nuova lista (fatta di nuovi nodi) con soli gli
elementi che appaiano almeno due volte.
*/

typedef struct list{
    int data;
    struct list* next;
} list_t;

int has_dup(list_t* l, int data){
    while(l != NULL){
        if(l->data == data) return 1;
        l = l->next;
    }
    return 0;
}

list_t * dups(list_t *l){
    list_t *new_head = NULL;
    list_t* temp = l;
    while(temp != NULL){
        if(has_dup(temp, temp->data)) return;
    }
}

int main() {
    // Inserisci il tuo codice qui

    return 0;
}
