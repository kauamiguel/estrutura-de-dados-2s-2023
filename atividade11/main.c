#include <stdio.h>
#include <stdlib.h>
#include "binaryTree.h"


int main(){
    int values[11] = {50, 30, 70, 20, 40, 60, 80, 15, 25, 35, 45};
    tree *root = NULL;

    for(int i = 0; i < 11; i++){
        root = insertSorted(root, values[i]);
    }

    Emordem(root);

    root = deleteNode(root, 50);
    printf("\n");
    Emordem(root);

    tree *value = search(root, 70);

    printf("\nValor %d existe.\n", value->value);

    value = minValue(root);

    printf("\nMin value : %d\n", value->value);

    value = maxValue(root);

    printf("\nMax value : %d\n", value->value);
}