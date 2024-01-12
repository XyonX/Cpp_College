#include <stdio.h>
#include <stdlib.h>

typedef struct node node;

struct node
{
    int data;
    node*next;
};


typedef struct 
{
    node*top;
}stack;

stack* create_stack(int size)
{
    stack*s = (stack*)malloc(sizeof(stack));
    s->top=NULL;
    return s;
}

int is_empty (stack*s)
{
    return s->top==NULL;
}

int push (stack*s, int data)
{
    node*temp = (node*)malloc(sizeof(node));
    if(s->top==NULL)
    {
        s->top=temp;
    }
    temp->next=s->top;
    s->top=temp;
}
int pop (stack*s)
{
    node*temp=s->top;
    int data = s->top->data;
    free(s->top);
    s->top=temp;
    return data;
}

int peek (stack*s)
{
    if(is_empty(s))
    {
        printf("stack is already empty");
    }
    return s->top->data;
}
int size ( stack*s)
{
    node*n = s->top;
    int count =0;
    while(n)
    {
        count++;
        n=n->next;
    }
    return count;
}