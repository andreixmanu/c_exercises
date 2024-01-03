#include <stdio.h>

/*
Scrivere una funzione che data una lista di interi (sia positivi che negativi) restituisca la lunghezza della sotto‑
lista più lunga costituita solo da interi positivi strettamente maggiori di 0. La lista è definita come segue.
*/

typedef struct list{
    int data;
    struct list* next;
} list_t;

int longest(list_t* l1){
    int res = 0, temp = 0;

    list_t* curr = l1;

    while(curr != NULL){
        if(curr->data > 0){
            temp++;
            if(temp > res) res = temp;
        } else temp = 0;
        curr = curr->next;
    }

    return res;
}

int main() {
    printf("Hello World!");
    return 0;
}
