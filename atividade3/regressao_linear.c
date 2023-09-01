/*
    Nome: Kauã Miguel Costa Matos
    Matrícula: UC22101679
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int x;
    float y;
}coodinates;

int main(int argc, char *argv[]){

    //Sarting with -1 because in the end of 100 line he reads one more charactere
    int quantityOfLines = -1;
    FILE *arquivoCSV = fopen(argv[1], "r");
    float mediaX = 0;
    float mediaY = 0;

    if(arquivoCSV == NULL){
        printf("Error reading the file\n");
        return 1;
    }

    char buffer;

    //Read the number of lines in csv file;
    do{
        buffer = fgetc(arquivoCSV);

        if(buffer == '\n') {
            quantityOfLines++;
        }

    }while(buffer != EOF);

    //Create a dynamic array of type coordinate based on number of lines
    coodinates *arrayOfCoordinate = (coodinates *)malloc(sizeof(coodinates) * quantityOfLines);
    
    if(arrayOfCoordinate == NULL){
        printf("Allocating memory was wrong\n");
        return 1;
    }

    //This function sets the file position of the beginning of the file
    // Stream is a file pointer that indicates the file from the begin or end
    rewind(arquivoCSV);

    for (int i = 0; i < quantityOfLines; i++) {
        fscanf(arquivoCSV, "%d,%f\n", &arrayOfCoordinate[i].x, &arrayOfCoordinate[i].y);
    }

    fclose(arquivoCSV);

    for (int i = 0; i < quantityOfLines; i++) {
        mediaX = mediaX + arrayOfCoordinate[i].x;
        mediaY = mediaY + arrayOfCoordinate[i].y;
    }
    //Avarage of coordinates
    mediaX = mediaX/quantityOfLines;
    mediaY = mediaY/quantityOfLines;

    //Inclination

    float XlessAvarageX = 0;
    float XlessAvarageXpow = 0;

    for (int i = 0; i < quantityOfLines; i++) {
        XlessAvarageX += (arrayOfCoordinate[i].x - mediaX) * (arrayOfCoordinate[i].y - mediaY);
        XlessAvarageXpow += (arrayOfCoordinate[i].x - mediaX) * (arrayOfCoordinate[i].x - mediaX);
    }

    float inclination = XlessAvarageX / XlessAvarageXpow;
    printf("Inclinacao : %.2f\n", inclination);

    // // Linear line
    float intercepcao = mediaY - (inclination * mediaX);

    printf("equação da regressão linear: y = %.2f * x + %.2f\n", inclination, intercepcao);

    return 0;
}
