



//Declaration of a 2d Array With
//3 Rows
//4 Columns
// In Stack

#include <cstdlib>
int Arr2D [3][4] = {{1,2,3,4} , { 5,6,7,8}, {9,10,11,12}};
int Arr1D [12] = {1,2,3,4 , 5,6,7,8, 9,10,11,12} ;

int Get_Element_By_ID ( int Row , int Column , int TotalRowNumber  ,int arr [] )
{
    int index = Column*TotalRowNumber + Row ; 
    return arr [index];
    
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



    int NumOfRows;
    int NumOfColumns;

    int* Arr2D_Heap [NumOfRows];


    for ( int i = 0 ; i < NumOfRows ; i++ )
    {
        int*Row = (int*) malloc(NumOfColumns*sizeof(int));
        Arr2D_Heap[i] = Row;
        
    }
}





