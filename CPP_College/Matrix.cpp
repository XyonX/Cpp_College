

//Diagonal Matrix

// M [ i , j] = 0   ; if( i!= j ) or
// M [i , j ] != 0  ; if ( i =j )

//Return Codes
// 0 = Executed without any erros
// -1 = Aborted with an issue 
//This array is capable of storing the data of a 5*5 diagonal matrix

struct Matrix
{
    int*row;
    
};

int Mat_Array [ 5] ;

int  Set (int arr [] ,int position_x , int position_y , int element )
{
    if(position_x != position_y)
    {
        return -1;
    }
    arr[position_x-1] = element;
}

int Get (int arr [] ,int position_x , int position_y )
{
    if(position_x != position_y)
    {
        return -1;
    }
    return arr[position_x-1];
}