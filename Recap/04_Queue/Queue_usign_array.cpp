#include <stdio.h>

typedef struct
{
    int front,rare;
    int*data;
    int size;
}queue;


//is empty logic 
// if the queue has both front and rare as -1
int is_empty(queue*q)
{
    return q->front==-1 && q->rare==-1 ;
}

// is full logic 
// if theque has the rare == size-1
int is_full(queue*q)
{
    return q->rare == q->size-1;
}

//enque operator
//2 checks before doing the direct data push 
// is it empty or is it full
/// if those two are not then simply increament rare and put the vale

int enqueue(queue*q,int data)
{
    if(is_full(q))
    {
        return -1;
    }
    else if (is_empty(q))
    {
        q->front=q->rare=0;
        q->data[q->rare]=data;
    }
    else
    {
        q->data[++q->rare]=data;
    }
    return 1;
}

int dequeue( queue*q)
{
    if(is_empty(q))
    {
        return -1;
    }
    
    else if (q->front ==q->rare)
    {
        q->front=q->rare=-1;
        return q->data[q->front];
    }
    else
    {
        return q->data[q->front++];
    }
    
}

int main()
{



    return 0;
}