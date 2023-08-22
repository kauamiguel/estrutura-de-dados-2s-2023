/*
    Nome: Kauã Miguel Costa Matos
    Matrícula: UC22101679
    
    Exercício 4 - Contar a quantidade de ocorrências de um elemento no array. 
    Escreva uma função que recebe um array de números inteiros e um número inteiro de busca, 
    e retorna a quantidade de vezes que o número de busca aparece no array.
*/

#include <stdio.h>

int quantidadeDeOcorrencias(int array[], int tam, int numeroDeBusca){
    int quantidadeOcorrencias = 0;
    for(int i = 0; i < tam; i++){
        if(array[i] == numeroDeBusca){
            quantidadeOcorrencias++;
        }
    }
    return quantidadeOcorrencias;
}

int main(){
    int array[8] = {1,2,3,4,4,4,5,5};
    int result = quantidadeDeOcorrencias(array, 8, 4);

    printf("Ocorrencias do numero 4: %d\n", result);
}