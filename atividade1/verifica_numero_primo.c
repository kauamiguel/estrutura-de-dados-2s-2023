/*
Crie um programa em linguagem C que recebe um número e imprime no console:

0 - se o número não for primo;

1 - se o número for primo.

O programa deve receber o número a ser verificado como parâmetro de execução.

Exemplo: .\verifica_numero_primo 123111
*/


#include <stdio.h>
#include <stdlib.h>

int verificaNumeroPrimo(int number);

int main(int argc, char *argv[]){
    int number = atoi(argv[1]);
    int returnOfFunction = verificaNumeroPrimo(number);

    if (returnOfFunction == 1){
        printf("Numero e primo. \n");
    }else{
        printf("Numero nao e primo. \n");
    }
}

int verificaNumeroPrimo(int number){
    for(int i = 2; i < (number / 2); i++){
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}