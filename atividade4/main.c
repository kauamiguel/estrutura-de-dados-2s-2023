/*
    Nome : Kauã Miguel Costa Matos
    Matrícula : UC22161679

No seu repositório de atividades, crie uma pasta chamada atividade4 que contenha os arquivos main.c bubble_sort.h e bubble_sort.c;

O seu programa deve implementar o algoritmo bubble sort para ordenar uma lista de números passados na chamada do programa e imprimir a lista dos números ordenados como saída.
Exemplo:
./main 54 26 93 17 77 31 44 55 20
Saída: 17 20 26 31 44 54 55 77 93

OBS: os números são passados como argumentos na chamada do programa (argv);

Como solução, poste o link da pasta atividade4 no seu repositório de atividades.
*/


#include <stdio.h>
#include <stdlib.h>
#include "bubbleSort.h"

int main (int argc, char *argv[]){
    int sizeOfArray = argc - 1;
    int vet[sizeOfArray];

    for(int i = 0; i < argc - 1; i++){
        if(i + 1 <= argc -1){
            int value = atoi(argv[i+1]);
            vet[i] = value;
        }
    }

    bubbleSort(vet, sizeOfArray);

    for(int i = 0; i < argc - 1; i++){
        printf("\n%d ", vet[i]);
    }
    printf("\n");
}