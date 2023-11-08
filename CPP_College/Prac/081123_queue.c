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
    int front = -1;
    int rare =-1;
    
    int is_full ()
    {
        return rare == MAX_SIZE-1;
    }
    int is_empty ()
    {
        return front ==-1;
    }
    void enqueue(int value)
    {
        if(is_full())
        {
            printf("Cant add any new element Queue is already full");
        }
        else
        {
            if(front ==-1)
            {
                //increareament the front only this time
                front =0;
            }
            data[++rare] = value;
            
        }
        
    }
    int dequeue ()
    {
        if(is_empty())
        {
            printf("stack is empty can not pop");
        }
        else
        {
            int item = data[rare];
            if(front >= rare)
            {
                front =-1;
                rare=-1;
            }
            else
            {
                front++;
            }
            return item;
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
            return data[front];
        }
    }
    void Display ()
    {
        for( int i = front ; i <= rare ; i++)
        {
            printf(" Data at inde :%d is : %d \n", i,data[i]);
        }
    }
    
    printf(" is empty : %d \n" , is_empty());
    enqueue(10);
    printf(" is empty : %d \n" , is_empty());
    Display();
    printf(" is full : %d \n" , is_full());
    enqueue(11);
    enqueue(12);
    enqueue(13);
    enqueue(14);
    Display();
    printf(" is full : %d \n" , is_full());
    dequeue();
    printf(" is full : %d \n" , is_full());
    Display();
    
    
    

    return 0;
}
