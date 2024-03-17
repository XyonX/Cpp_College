#include <stdio.h>
#include <stdlib.h>
int main()
{
    int** adjMat;
    int i, s,d;
    FILE* fp = fopen("adj.txt","r");


    int numVertex, numEdges;
    fscanf(fp,"%d",&numVertex);
    fscanf(fp,"%d",&numEdges);

    printf("num Vertex : %d \n" , numVertex);
    printf("num Edges : %d \n" , numEdges);

    adjMat = (int**)malloc(numVertex*sizeof(int*));

    for(i=0;i<numVertex;i++)
    {
        adjMat[i] = (int*)malloc(numVertex*sizeof(int));
    }

    while (fscanf(fp,"%d %d",&s,&d) == 2)
    {
        printf("%d\t%d \n",s,d);
        //adjMat[s][d]=1;
    }


    // Free dynamically allocated memory
    for (i = 0; i < numVertex; i++) {
        free(adjMat[i]);
    }
    free(adjMat);
    
}

//dijkstra formula 
//to find the shortest path form u to v 
// d(v)+ d(u,v)
// distance to u from current + distance of v from u