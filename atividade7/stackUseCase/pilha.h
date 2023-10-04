typedef struct nodeStack{
    int value;
    struct nodeStack *next;
}node;

typedef struct{
    node *top;
}stack;

void push(stack *top, int value);
node *pop(stack *top);
node *createNode(int value);
stack *createStack();
int isEmpty(stack *top);
void showTop(stack *top);