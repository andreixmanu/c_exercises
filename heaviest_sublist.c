
#include <stdio.h>

/*
 * Data una lista di interi (sia positivi che negativi) definiamo il suo peso come la somma dei suoi elementi. Il
peso di una lista vuota è pari a 0. Scrivere una funzione che data una lista di interi restituisca il peso della
sotto‑lista più pesante.
 */

typedef struct list{
    int data;
    struct list *next;
} list_t;

int sublist_weight(list_t *l) {
    if(l == NULL) return 0;

    list_t *start = l;
    list_t *end;
    int res = l->data;

    while(start != NULL){
        int peso = 0;
        end = start;
        while(end != NULL){
            peso += end->data;
            if(peso > res) res = peso;
            end = end->next;
        }
        start = start->next;
    }
    return res;
}

int main() {
    printf("Hello World!");
    return 0;
}