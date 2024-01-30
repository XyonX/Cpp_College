#include<stdio.h>

typedef struct node node;
struct node
{
    int data;
    node*next;
};

void Reverse (node*head)
{
    node*current;
    node* prev=NULL;
    node*next;

    current=head;
    while(current)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
}
