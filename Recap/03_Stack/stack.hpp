#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    int top,size;
    int*data;

}stack;


stack*create_stack(int size)
{
    stack*s = (stack*)malloc(sizeof(stack));
    s->size=size;
    s->top=-1;
    s->data=(int*) malloc(sizeof(int)*size);
    return s;
}

int is_empty(stack*stack)
{
    return stack->top ==-1;
}
int is_full (stack*stack)
{
    return stack->top == stack->size-1;
}

void push (stack*s,int data)
{
    if(is_full(s))
    {
        printf(" ERROR ! stack is already ");
        exit(EXIT_FAILURE);
        
    }
    s->data[++s->top] = data;
}
int pop ( stack*s)
{
    if(is_empty(s))
    {
        printf("ERROR! Stack is already empty");
        exit(EXIT_FAILURE);
    }
    return s->data[s->top--];
}

int peek (stack*s)
{
    if(is_empty(s))
    {
        printf("ERROR! Stack is already empty");
        exit(EXIT_FAILURE);
    }
    return s->data[s->top];
}

void destroy_stack (stack*s)
{
    free(s->data);
    free(s);
}


