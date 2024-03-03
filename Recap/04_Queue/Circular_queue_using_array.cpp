#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int front,rear;
    int*data;
    int size;
}queue;


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
    return (q->rear+1)%q->size == q->front;
}

//enque operator
//2 checks before doing the direct data push 
// is it empty or is it full
/// if those two are not then simply increament rear and put the vale

int enqueue(queue*q,int data)
{
   
    if (is_empty(q))
    {
        q->front=q->rear=0;
        q->data[q->rear]=data;
    }
     else if(is_full(q))
    {
        return -1;
    }
    else
    {
        int loc = (q->rear+1)%q->size;
        q->rear=loc;
        q->data[loc]=data;
    }
    return 1;
}

int dequeue( queue*q)
{
    //Empty
    if(is_empty(q))
    {
        return -1;
    }
    
    //having one element
    else if (q->front ==q->rear)
    {
        q->front=q->rear=-1;
        return q->data[q->front];
    }
    else
    {
        int loc = (q->front+1)%q->size;
        int data = q->data[q->front];
        q->front=loc;
        return data;
    }
    
}

int main()
{



    return 0;
}
