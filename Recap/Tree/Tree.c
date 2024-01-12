#include<stdio.h>
#include<stdlib.h>

typedef struct node node;

struct node
{
    int data;
    node*left,*right;

};

node* create_tree()
{

    node* newnode ;
    newnode = (node*) malloc(sizeof(node));
    int x;
    printf("Ente the  data (-1 for no node) :");
    scanf("%d",&x);
    
    if(x ==-1)
    {
        return 0;
    }
    newnode->data=x;

    printf("Enter the left child of %d ",x);
    newnode ->left= create_tree();

    printf("Enter the right child of %d",x);
    newnode->right=create_tree();

    return newnode;
}


int main()
{
    node*root;
    root=create_tree();
    printf("faf");

}