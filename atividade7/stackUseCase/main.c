#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

/*
    Dado um alfabeto {0,1}, e uma linguagem que aceita 1n0n, ao digitar 1 ele empilha  e ao digitar 
    0 ele desempilha, verificando se a cadeia pertence ou não a linguagem (1`s em mesma quantidade de 0`s).
*/

int main() {
    stack *myStack = createStack();
    int word[10];

    printf("1 - digite uma cadeia de caracteres digito por digito para verificar se ela está contida: \n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &word[i]);
    }

    for(int i = 0; i < 10; i++){
        if(word[i] == 1){
            push(myStack, word[i]);
        }else{
            node *aux = pop(myStack);
            printf("\nDesempilhando %d\n", aux->value);
        }
    }
    
}