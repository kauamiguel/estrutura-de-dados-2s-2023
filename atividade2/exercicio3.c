/*
    Nome: Kauã Miguel Costa Matos
    Matrícula: UC22101679
    
    Verificar se um elemento existe no array Escreva uma função que recebe um array de strings e uma string de busca, 
    e retorna "1" se a string de busca existe no array, ou "0" caso não exista.
*/

#include <stdio.h>
#include <string.h>

int verificaArray(char array[][20], int tamanhoPalavras, char stringDeBusca[]){

    for(int i = 0; i < tamanhoPalavras; i++){
        if (strcmp(array[i], stringDeBusca) == 0){
            return 1;
        }
    }
    return 0;
}

int main(){

    char array[2][20] = {"texto", "EDA"};
    int result = verificaArray(array, 2, "EDA");

    if(result == 1){
        printf("Encontrou.\n");
    }else{
        printf("Nao encontrou.\n");
    }

}
