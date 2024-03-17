#include<stdio.h>
#include<stdlib.h>
#include <math.h>

void swap(int* a , int* b )
{
    int temp = *a;
    *a=*b;
    *b=temp;
}

typedef struct 
{
    int*array;
    int capacity;
    int size;
}Heap;

Heap*CreateHeap(int capacity)
{
    Heap*h = (Heap*)malloc(sizeof(Heap));
    h->array = (int*)malloc(capacity*sizeof(int));
    h->capacity=capacity;
    h->size=0;
    return h;
}

int Parent(Heap*h, int i)
{
    return floor(i/2);
}


void insert(Heap*h,int data)
{
    int index = h->size;
    h->array[h->size++]=data;

    while (index> 0)
    {
        int pindex = Parent(h,index);
        if(h->array[index] < h->array[pindex])
        {
            swap(&h->array[index], & h->array[pindex]);
            index = pindex;
        }
        else{
            break;
        }
    }
}
