#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubbleSort.h"

void sortArray(char ararys[][40], int size){
    char aux[30];
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(strcmp(ararys[i], ararys[j]) > 0 ){
                strcpy(aux, ararys[i]);
                strcpy(ararys[i], ararys[j]);
                strcpy(ararys[j], aux);
            }
        }
    }
}