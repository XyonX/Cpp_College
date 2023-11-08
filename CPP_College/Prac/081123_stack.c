/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX_SIZE 5

int main()
{
    
    int data[MAX_SIZE];
    int Top =-1;
    
    int is_full ()
    {
        return Top == MAX_SIZE-1;
    }
    int is_empty ()
    {
        return Top==-1;
    }
    void push(int value)
    {
        if(is_full())
        {
            printf("Stack is already full  \n");
        }
        else
        {
            data[++Top] =value;
        }
        
    }
    int pop ()
    {
        if(is_empty())
        {
            printf("stack is empty can not pop");
        }
        else
        {
            printf("Popped the element from the stack \n");
            int poppod_element = data[Top--];
            return poppod_element;
            
        }
    }
    
    int peek()
    {
        if(is_empty())
        {
            return -1;
        }
        else
        {
            return data[Top];
        }
    }
    void Display ()
    {
        for( int i = 0 ; i <= Top ; i++)
        {
            printf(" Data at inde :%d is : %d \n", i,data[i]);
        }
    }
    
    printf(" is empty : %d \n" , is_empty());
    push(10);
    printf(" is empty : %d \n" , is_empty());
    Display();
    printf(" is full : %d \n" , is_full());
    push(11);
    push(12);
    push(13);
    push(14);
    Display();
    printf(" is full : %d \n" , is_full());
    pop();
    printf(" is full : %d \n" , is_full());
    Display();
    
    
    

    return 0;
}
