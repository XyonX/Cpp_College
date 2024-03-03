#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int front,rear;
    int*data;
    int size;
}queue;

queue* create_queue(int size) {
    queue *q = (queue *)malloc(sizeof(queue)); // Allocate memory for the queue
    if (q == NULL) {
        printf("Memory allocation failed.\n");
        return NULL; // Return NULL if memory allocation fails
    }
    q->front = q->rear = -1;
    q->size = size;
    q->data = NULL; // Initialize data pointer to NULL
    return q;
}

void destroy_queue(queue *q) {
    if (q != NULL) {
        if (q->data != NULL) {
            free(q->data); // Free memory allocated for data array
        }
        free(q); // Free memory allocated for the queue itself
    }
}

//is empty logic 
// if the queue has both front and rear as -1
int is_empty(queue*q)
{
    return q->front==-1 && q->rear==-1 ;
}

// is full logic 
// if theque has the rear == size-1
int is_full(queue*q)
{
    return q->rear == q->size-1;
}

//enque operator
//2 checks before doing the direct data push 
// is it empty or is it full
/// if those two are not then simply increament rear and put the vale

int enqueue(queue*q,int data)
{
    if(is_full(q))
    {
        return -1;
    }
    else if (is_empty(q))
    {
        q->front=q->rear=0;
        q->data[q->rear]=data;
    }
    else
    {
        q->data[++q->rear]=data;
    }
    return 1;
}

int dequeue( queue*q)
{
    if(is_empty(q))
    {
        return -1;
    }
    
    else if (q->front ==q->rear)
    {
        q->front=q->rear=-1;
        return q->data[q->front];
    }
    else
    {
        return q->data[q->front++];
    }
    
}

int main()
{

    queue*q = create_queue(10);
    printf(" queue size : %d",q->size);
    enqueue(q,5);
    printf("%d", dequeue(q));


    return 0;
}