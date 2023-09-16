#include <stdio.h>
#include "bubbleSort.h"

/*
    O nome bubble sort é por lembrar refrigerante, onde as bolhas sobem pro copo.
    Assim, o maior elemento do array sempre é jogado para o final do array.
*/

void bubbleSort(int *vet, int size){
    int aux;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i; j++){
            if (vet[j] > vet[j+1]){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}