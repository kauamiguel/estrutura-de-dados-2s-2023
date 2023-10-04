#include <stdio.h>
#include <stdlib.h>
#include "queue.h"


void enque(queue *queue, int value){
    node *nodeCreated = createNode(value);
    if(queue->head == NULL){
        queue->head = nodeCreated;
        queue->tail = nodeCreated;
        return;
    }

    queue->tail->next = nodeCreated;
    queue->tail = nodeCreated;
}

node *dequeue(queue *queueHead){
    if(isEmpty(queueHead)){
        printf("Fila vazia\n");
        return NULL;
    }

    node *aux = queueHead->head;
    queueHead->head = aux->next;
    return aux;
}

node *createNode(int value){
    node *newNode = (node *)malloc(sizeof(node));
    newNode->next = NULL;
    newNode->value = value;
    return newNode;
}

queue *createQueue(){
    queue *queueReference = (queue *)malloc(sizeof(queue));
    queueReference->head = NULL;
    queueReference->tail = NULL;
    return queueReference;
}

int isEmpty(queue *queue){
    if(queue->head == NULL){
        printf("Fila vazia\n");
        return 1;
    }
    return 0;
}

void peekQueue(queue *queue){
    printf("Primeiro elemento %d\n", queue->head->value);
}