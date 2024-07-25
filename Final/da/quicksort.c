#include <stdio.h>
#include <stdlib.h>


void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int  partition(int*a, int l, int h )

{
    int pivot,i,j;

    pivot=a[l];
    i=l;
    j=h;

    while(i<j)
    {

        do
        {
            i++;
        }
        while(a[i]<pivot);
        do
        {
            j--;
        } while (a[j]>pivot);

        if(i<j)
        {
            swap(& a[i],&a[j]);
        }

    }
    swap(&a[l],&a[j]);

    return j;
    
}

void quicksort(int* a,int l,int h)
{

    int j;
    if(l<h)
    {
        j=partition(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }
}

void Display(int*arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr [10] = {41,31,3,42,17,5,12,11,63,33};
    quicksort(arr,0,9);
    Display(arr,10);
}