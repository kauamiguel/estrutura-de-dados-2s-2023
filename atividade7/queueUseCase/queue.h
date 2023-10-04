typedef struct nodeStack{
    int value;
    struct nodeStack *next;
}node;

typedef struct{
    node *head;
    node *tail;
}queue;

void enque(queue *queue, int value);
node *dequeue(queue *queueHead);
node *createNode(int value);
queue *createQueue();
int isEmpty(queue *queue);
void peekQueue(queue *queue);
