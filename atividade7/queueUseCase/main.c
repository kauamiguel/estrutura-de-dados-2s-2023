#include <stdio.h>
#include <stdlib.h>
#include "queue.h"


int main(){
    int numeroNaFicha[5];
    int answer = 0;
    queue *myQueue = createQueue();

    for (int i = 0; i < 5; i++){
        printf("Seu numero na fila = %d\n", i+1);
        numeroNaFicha[i] = i+1;
        enque(myQueue, numeroNaFicha[i]);   
    }

    peekQueue(myQueue);
}