#include <stdlib.h>
#include <stdio.h>

//Creation of an array in stack of size 20
int stackArray [20 ];

//Creation of an array in heap of size 20


int array1 [5] = {65,63,165,24,243};
int array2 [10] ;

//Increasing the size of an array



void Increase_Array_Size ( int existing_array [] , int new_array [] )
{
    int arraySize = sizeof(existing_array)/existing_array[0] ;

    for (int i  = 0 ; i < arraySize ; i++)
    {

        new_array[i] = existing_array[i];
    }
    
}

//Getting the address of an array element by index
// add = baseaddress + (index*data type size)
// base adddress = address of the first element ( element 0 )




/*
int main ()
{

    int* heapArray = (int*) malloc ( 20*sizeof(int));

    // Do something with the array


    //After we done with the array we delete the memory allocation
    free(heapArray);
    
}*/