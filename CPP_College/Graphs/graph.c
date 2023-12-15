
#include <stdio.h>
#include<stdlib.h>

/*
There are 3 ways to represent The graph matrix
1. Adjacency matrix 
2.
3.

*/



struct Graph
{

    int Vertices;
    int Edges;
    int **adjMatrices;

};


struct Edge
{
    int Start;
    int End;
};

struct Graph* CreateGraph (int numVertices)
{
    struct Graph* graph =  (struct Graph *)malloc ( sizeof(struct Graph));
}

int main()
{



}
