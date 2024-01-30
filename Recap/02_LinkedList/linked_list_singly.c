#include<stdio.h>
#include<stdlib.h>


typedef struct node node;

struct node
{
    int data;
    node*next;
};


node* create_node()
{
    node*n=(node*)malloc(sizeof(node));
    n->next=NULL;
    return n;
}

//Insertion a node before the head (at the beginning)
void insert_beginning(node*head,node*newnode)
{
    if(head==NULL){
        head=newnode;
    }
    else
    {
    newnode->next=head;
    head=newnode;
    }

}
//insertion a node after the tail(at the end)
void insert_end (node*head,node*newnode)
{
    if(head==NULL)
    {
        head=newnode;
    }
    else{
    node*temp=head;
    while(temp->next)
    {
        temp=temp->next;
    }
    newnode->next=NULL;
    temp->next=newnode;
    }

}

void insert_at(int pos,node*head,node*newnode)
{
    node*temp = head;
    int count=0;
    
    while(count<pos && temp)
    {
        temp=temp->next;
        count++;
    }
    if(temp)
    {
    newnode->next=temp->next;
    temp->next=newnode;
    }


}

// it returns the last node
node* traverse(node*head)
{
    node*temp =head;
    while(temp->next)
    {
        temp=temp->next;
    }
    return temp;
}



int main()
{
    node*head=NULL;

    node*newnode = create_node();
    newnode->data=10;

    head=newnode;

}