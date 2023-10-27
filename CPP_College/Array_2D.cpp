



//Declaration of a 2d Array With
//3 Rows
//4 Columns
// In Stack

#include <cstdio>
#include <cstdlib>
int Arr2D [3][4] = {{1,2,3,4} , { 5,6,7,8}, {9,10,11,12}};
int Arr1D [12] = {1,2,3,4 , 5,6,7,8, 9,10,11,12} ;

int Get_Element_By_ID ( int Row , int Column , int TotalRowNumber  ,int arr [] )
{
    int index = Column*TotalRowNumber + Row ; 
    return arr [index];
    
}

void Iterating_All_The_Elements(int*Array [] , int Row , int Columns)
{
    for(int i =0 ; i < Row ; i++)
    {

        for ( int j =0; j< Columns;j++)
        {
            int Element = Array[i][j];
        }
    }
}

/**
In C, you can pass arrays as arguments to functions,
but you can't directly return arrays from functions.

**/


//Declaration of a 2d Array With
//3 Rows
//4 Columns
// In Heap

int main ()
{



    int NumOfRows=3;
    int NumOfColumns=4;

    int* Arr2D_Heap [3];


    for ( int i = 0 ; i < NumOfRows ; i++ )
    {
        int*Row = (int*) malloc(NumOfColumns*sizeof(int));
        Arr2D_Heap[i] = Row;
        
    }

    int*Array_2D [3];

    //Creating the actual array
    for (int i = 0 ; i<3 ; i++)
    {
        Array_2D[i] = (int*) malloc(4*sizeof(int));
    }

    //Iterating over all the elements To WRITE
    for (int i =0; i <3 ; i++)
    {

        for (int j=0 ; j<4 ; j++)
        {
            Array_2D[i][j] = i*j;
        }
    }

    //Iterating over all the elements To READ
    for (int i =0; i <3 ; i++)
    {

        for (int j=0 ; j<4 ; j++)
        {
            printf( "%d" , Array_2D[i][j]);
        }
    }
    // Don't forget to free the allocated memory
    for (int i = 0; i < 3; i++)
    {
        free(Array_2D[i]);
    }
}





