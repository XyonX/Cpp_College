/*
An unsorted array contains 2n+1 integers such taht all but one element occur twice
each. Write a program/pseudo-code/algorithm that can find the element occuring
exactly once in this array. What is its time complexity?


*/




#include <stdio.h>
#include <stdlib.h>


int find_number (int*array,int size)
{
    int i,result;
    result=0;
    for (i=0;i<size;i++)
    {
        result ^=array[i];
    }
    return result;
}

int main ()
{


    int arr_static[9] ={3,6,2,1,2,1,3,5,6};

    
    int res = find_number(arr_static,9);
    printf(" the number without repeatation is : %d",res);
}