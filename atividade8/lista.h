typedef struct no{
    int value;
    struct no *next;
}node;

typedef struct{
    node *initial;
}list;

void insertValue(int value, list *listReference);
void printList(list *listReference);
int isEmpty(list *listReference);
node *createNode(int value);
list *createList();
int containsValue(int value, list *listReference);
int verifyOcurrency(int value, list *listReference);
int listSize(list *listReference);
void printInverseOrder(list *listReference);
void insertInto(int value, int position, list *listReference);
void removeInto(int position, list *listReference);
void removeNodeWith(int value, list *listReference);
