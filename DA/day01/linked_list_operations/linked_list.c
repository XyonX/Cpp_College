#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    void* data;
    struct node*next;
}LList;

void insert(LList* pLList, void* data, int pos)
{
    if (pLList == NULL) {
        return;
    }

    LList*newnode = (LList*)malloc(sizeof(LList));
    if (newnode == NULL) {
        return;
    }

    newnode->data=data;
    newnode->next=NULL;

    if(pos==0)
    {
        newnode->next=pLList;
        pLList = newnode;
    }
    else if (pos>0)
    {
        int count=0;
        LList*temp =pLList;
        while (count <pos-1 && temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    else if(pos==-1)
    {
        LList*temp=pLList;
        while(temp->next!= NULL)
        {
            temp=temp->next;
        }
        temp ->next=newnode;
    }
    else
    {
        return ;
    }
    
}
void create(LList**ppLLIST)
{
    *ppLLIST=NULL;
}
int status(LList**ppLLIST)
{
    LList*head=*ppLLIST;
    if(head==NULL)
    {
        printf("The list is empty!!");
        return 0;
    }
    printf("The list is not empty");
    return 1;
}
int destroy(LList**input)
{
    LList*head=*input;
    if(head==NULL)
    {
        printf("Input list is already empty");
        return 0;
    }
    LList*current=head;
    LList*next;

    while(current != NULL)
    {
        next=current->next;
        free(current);
        current=next;
    }
    head=NULL;
    return 1;
}
void removee (LList *pLList, int pos)
{
    int count=0;
    LList*temp=pLList;
    while (count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    temp->next=temp->next->next;
    
}
void print(LList*pLList)
{
    if(pLList==NULL)
    {
        printf("The linked list is alredy empty");

    }
    LList*temp =pLList;
    while (temp)
    {
        printf("%d \n",temp->data);
    }
    
}
void printelem(void*elem)
{
    printf("%d",*((int*)elem));
}

int main()
{
    LList *pList1, *pList2;
    create(&pList1); 
    create(&pList2); 
    int a = 10, b = 20,c = 30;
    insert(pList1, &a, 0); 
    insert(pList1, &b, -1); 
    insert(pList2, &c, 0);
    print((pList1));



}