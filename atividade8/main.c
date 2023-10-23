#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main(){
    list *myList = createList();

    insertValue(10, myList);
    insertValue(20, myList);
    insertValue(30, myList);
    insertValue(10, myList);
    insertValue(40, myList);
    printList(myList);
    int result = containsValue(20, myList);
    int quantityOcurrency = verifyOcurrency(10, myList);
    int sizeList = listSize(myList);
    printInverseOrder(myList);
    insertInto(50, 2, myList);
    printList(myList);
    removeInto(2, myList);
    printList(myList);
    removeNodeWith(10, myList);
    printList(myList);
} 