/*
    Nome: Kauã Miguel Costa Matos
    Matrícula: UC22101679
    
     Multiplicar elementos de dois arrays. 
     Escreva uma função que recebe dois arrays de números inteiros com o mesmo tamanho e 
     retorna um novo array com os elementos resultantes da multiplicação dos elementos dos 
     dois arrays.
*/

#include <stdio.h>

void multiplicarArrays(int array1[], int array2[], int tam, int arrayResultante[]){

    for(int i = 0; i < tam; i++){
        arrayResultante[i] = array1[i] * array2[i];
    }
}

int main(){
    int array1[4] = {5, 7, 9, 6};
    int array2[4] = {5, 7, 9, 6};
    int arrayResultante[4]; 
    multiplicarArrays(array1, array2, 4, arrayResultante);

    printf("Array resultante  {");
    for(int i = 0; i < 4; i++){
        printf("%d ", arrayResultante[i]);
    }
    printf("}\n");
}