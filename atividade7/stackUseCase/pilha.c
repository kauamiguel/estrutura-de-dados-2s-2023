#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"


void push(stack *top, int value){
    node *aux =  createNode(value);
    aux->next = top->top;
    top->top = aux;
}

node *pop(stack *top){
    if(isEmpty(top)){
        printf("Pilha vazia\n");
        return NULL;
    }

    node *aux = top->top;
    top->top = aux->next;
    return aux;
}

node *createNode(int value){
    node *newNode = (node *)malloc(sizeof(node));
    newNode->next = NULL;
    newNode->value = value;
    return newNode;
}

stack *createStack(){
    stack *newStack = (stack *)malloc(sizeof(stack));
    newStack->top = NULL;
    return newStack;
}

int isEmpty(stack *top){
    if(top->top == NULL){
        return 1;
    }
    return 0;
}

void showTop(stack *top){
    printf("Top %d\n", top->top->value);
}


