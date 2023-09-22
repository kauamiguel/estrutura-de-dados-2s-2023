/*
    Nome : Kauã Miguel Costa Matos
    Matrícula : UC22101679

No seu repositório de atividades, crie uma pasta chamada atividade5 que contenha os arquivos main.c bubble_sort.h e bubble_sort.c;

O seu programa deve implementar o algoritmo bubble sort para ordenar um arquivo de palavras passados na chamada do programa e criar um arquivo com as palavras ordenadas como saída.
Exemplo:
./main arq_palavras.txt
Saída: arq_palavras_ordenado.txt

arq_palavras.txt
hoje
amanha
depois

arq_palavras_ordenado.txt
amanha
depois
hoje

OBS: o nome do arquivo é passado como argumento na chamada do programa (argv);

Como solução, poste o link da pasta atividade4 no seu repositório de atividades.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubbleSort.h"
#define MAX_SIZEWORD 40

int main(int argc, char *argv[]){

    char words[3][MAX_SIZEWORD];

    FILE *filePointer = fopen(argv[1], "r");

    if (filePointer == NULL){
        printf("filePointer null\n");
        return 1;
    }

    int i = 0;
    while(fscanf(filePointer, "%s", words[i]) !=  EOF){
        i++;
    }

    fclose(filePointer);

    sortArray(words, 3);

    for(int i = 0; i < 3; i++){
        printf("%s\n", words[i]);
    }

    FILE *outPutFile = fopen("arq_palavras_ordenado.txt", "w");

    if(outPutFile == NULL){
        printf("Output file null\n");
        return 1;
    }

    for(int i = 0; i < 3; i++){
        fprintf(outPutFile, "%s\n", words[i]);
    }

    fclose(outPutFile);

    return 0;

}