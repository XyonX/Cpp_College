#include <stdio.h>
#include <stdlib.h>

typedef struct _n {
    int data;
    struct _n* next;
}node;

void insert_node(node**head,int data)
{
    node*new= malloc(sizeof(node));
    new->data=data;
    new->next=*head;
    *head=new;
}

//Establishes new sets/trees containing individual elements/nodes
//basically the parnet array creation
void MAKESET(int s[], int size){
    int i=0;
    for (i=0;i<size;i++)
    {
        s[i]=i;
    }
}

//Fun to find the parent of a specific vertex
//Find parnet of a node from parent array
int FIND(int s[], int x)
{
    if(x=s[x])
    {
        return x;
    }
    else
    {
        FIND(s,x[s]);
    }
}

int UNION (int s[], int x , int y  )
{

    int par_x = FIND(s,x);
    int par_y = FIND(s,y);
    if (par_x==par_y)
    {
        return 0;
    }
    s[par_x]=par_y;
    return 1;
}

int main()
{

    FILE* fp = fopen("adj.txt","r");
    int numVertex, numEdges;
    int s,d,numConComp;
    int*sets;
    
    fscanf(fp,"%d",&numVertex);
    fscanf(fp,"%d",&numEdges);


    sets = (int*)malloc(numVertex*sizeof(int));
    numConComp=numVertex;

    MAKESET(sets,numVertex);
    while (fscanf(fp,"%d %d",&s,&d) == 2)
    {
        //printing the edge
        printf("%d\t%d \n",s,d);
        int res = UNION(sets,s,d);
        numConComp-=res;
    }
    printf("Total connected  Component is : %d",numConComp);
}
    
 