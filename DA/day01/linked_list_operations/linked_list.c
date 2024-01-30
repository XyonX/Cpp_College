#include<stdio.h>
#include<stdlib.h>
typedef struct node node;

struct node
{
    int data;
    node*next;
};

void insert(node**head)
{

}
void create(node**head)
{
    *head=NULL;
}

int status(node**input)
{
    node*head=*input;
    if(head==NULL)
    {
        printf("The list is empty!!");
        return 0;
    }
    printf("The list is not empty");
    return 1;
}
int destroy(node**input)
{
    node*head=*input;
    if(head==NULL)
    {
        printf("Input list is already empty");
        return 0;
    }
    node*current=head;
    node*next;

    while(current != NULL)
    {
        next=current->next;
        free(current);
        current=next;
    }
    head=NULL;
    return 1;
}
int main()
{
    node*head;
    create(&head);
    status(&head);


}