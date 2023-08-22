/*
    Nome: Kauã Miguel Costa Matos
    Matrícula: UC22101679
    
    Exercício 1 - Soma dos elementos de um array. Escreva uma 
    função que recebe um array de números inteiros e retorna a soma de todos os elementos;
*/

#include <stdio.h>

int somaArray(int array[], int tamanho){
    int result = 0;

    for(int i = 0; i < tamanho; i++){
        result = result + array[i];
    }

    return result;
}

int main(){
    int array[4] = {5,7,9,6};
    int resultado = somaArray(array, 4);

    printf("Resultado da soma: %d\n", resultado);

}

