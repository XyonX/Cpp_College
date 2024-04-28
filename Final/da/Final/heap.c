#include <stdio.h>
#include<stdlib.h>


typedef struct 
{
    int*arr;
    int capacity;
    int size;
}Heap;

void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    
}
Heap* CreateHeap(int capacity)
{
    Heap*h=malloc(sizeof(Heap));
    h->capacity=capacity;
    h->size=0;
    h->array=malloc(capacity*sizeof(int));
    return h;
}


void insert(Heap*h,int val)
{
    h->arr[h->size]=val;
    
    int index =h->size;

    while(index>=0)
    {
        if(h->arr[index/2] >h->arr[index])
        {
            swap(h->arr[index/2],h->arr[index])
            int index = index/2;
            continue;
        }
        break;
        
    }

}

int main()
{
    Heap* h = (Heap*)malloc(sizeof(Heap));

    h->capacity=100;
    h->



}

