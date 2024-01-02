#include <stdio.h>
#include <stdlib.h>

/*
Scrivere una funzione delta che, dato un array di interi A di lunghezza maggiore di 1, restituisca la diferenza
tra i suoi due elementi più piccoli.
*/

int delta(int* a, int array_size){
  int min1 = a[0], min2 = a[1];
  
  //find first min
  for(int i = 0; i<array_size; i++)
    if(a[i] < min1) min1 = a[i];
  
  //find second min
  for(int i = 0; i<array_size; i++)
    if(a[i] < min2 && a[i] > min1) min2 = a[i];
  
  return min2 - min1;
}

int main() {

  int A[] = { 1,5,8,3 };
  printf( "%d \n", delta(A, 4));

  return 0;
}