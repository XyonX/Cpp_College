#include <stdlib.h>
#include <stdio.h>

//Creation of an array in stack of size 20
int stackArray [20 ];

//Creation of an array in heap of size 20



int main ()
{

    int* heapArray = (int*) malloc ( 20*sizeof(int));

    // Do something with the array


    //After we done with the array we delete the memory allocation
    free(heapArray);
    
}