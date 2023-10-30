#include <stdio.h>
#define MAX_SIZE 10
struct Stack
{
    int Data [MAX_SIZE];
    int Top = -1;
};

int Is_Empty (struct Stack*stack)
{
    return stack->Top ==-1;
}
int Is_Full (struct Stack*stack)
{
    return stack->Top == MAX_SIZE;
}

void Push (struct Stack*stack , int value)
{
    stack->Data[++stack->Top] =value;
}
int Pop ( struct Stack*stack)
{
    return stack->Data[stack->Top];
}
