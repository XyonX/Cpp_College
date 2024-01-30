#include<stdio.h>

typedef struct node node;
struct node
{
    int data;
    node*prev;
    node*next;
};

void Reverse (node*head)
{
    node*current;

    current=head;
    while(current->next)
    {
        current=current->next;
    }
    head =current;
}
