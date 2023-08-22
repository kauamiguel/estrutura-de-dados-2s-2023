/*
    Nome: Kauã Miguel Costa Matos
    Matrícula: UC22101679
    
    Exercício 2 - Maior e menor elemento do array. Escreva uma função que recebe um array de 
    números inteiros e retorna o menor e o maior elemento do array.
*/

#include <stdio.h>

int *maiorEmenor(int array[], int tamanho){
    int maiorElemento = array[0];
    int menorElemento = array[0];

    for(int i = 1; i < tamanho; i++){
        if (array[i] > maiorElemento){
            maiorElemento = array[i];
        }else{
            if(array[i] < menorElemento){
                menorElemento = array[i];
            }
        }
    }

    int resut[2] = {maiorElemento, menorElemento};
    return resut;
}

int main(){
    int array[4] = {1,7,10,6};
    int *result = maiorEmenor(array, 4);
    int maiorElemento = *(result);
    int menorElemento = *(result + 1);

    printf("Menor e maior: %d, %d\n", menorElemento, maiorElemento);
}