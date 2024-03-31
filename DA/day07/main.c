#include<stdio.h>
#include<stdlib.h>
#include <math.h>


/*
With 0-based indexing:

For any node at index i, its left child is at index 2i + 1 and its right child is at index 2i + 2.
The parent of a node at index i is located at index (i - 1) / 2 (again, using integer division).

*/

/*
When using 1-based indexing for the array representation of a heap:

For any node at index i, its left child is at index 2i, and its right child is at index 2i + 1.
Conversely, the parent of a node at index i is located at index i/2 (integer division).

*/
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

//min heap
//Add eleement at the size index(at the end of the array)
//compare with  with its parent if parent element is greater swap(for min heap) and do this untill we reach top
void insert(Heap*h,int data)
{
    int index = h->size;
    h->array[h->size++]=data;

    while (index> 0)
    {
        int pindex = floor(index/2);
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

void delete(Heap*h){

    h->array[1] = h->array[h->size-1];

    int i = 1;
    int ci = h->array[2*i] > h->array[(2*i)+1] ? (2*i) : (2*i)+1 ; 

    while (ci<=h->size )
    {
        if(h->array[ci] > h->array[i])
        {
            swap(&h->array[ci] ,&h->array[i]);
            i = ci;
            ci = h->array[2*i] > h->array[(2*i)+1] ? (2*i) : (2*i)+1 ; 
        }
        else
        {
            break;
        }
    }
}

