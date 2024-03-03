
#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int front, rear;
    int *data;
    int size;
} queue;

int is_empty(queue *q) {
    return q->front == -1 && q->rear == -1;
}

int is_full(queue *q) {
    return q->rear == q->size - 1;
}

int enqueue(queue *q, int data) {
    if (is_full(q)) {
        return -1; // Queue is full
    } else if (is_empty(q)) {
        q->front = q->rear = 0;
        q->data = (int *)malloc(q->size * sizeof(int)); // Allocate memory for data
        q->data[q->rear] = data;
    } else {
        q->data[++q->rear] = data;
    }
    return 1; // Success
}

int dequeue(queue *q) {
    if (is_empty(q)) {
        return -1; // Queue is empty
    } else if (q->front == q->rear) {
        int value = q->data[q->front];
        free(q->data); // Free memory when the queue becomes empty
        q->front = q->rear = -1;
        return value;
    } else {
        return q->data[q->front++];
    }
}

queue* create_queue(int size) {
    queue *q = (queue *)malloc(sizeof(queue)); // Allocate memory for the queue
    if (q == NULL) {
        printf("Memory allocation failed.\n");
        return NULL; // Return NULL if memory allocation fails
    }
    q->front = q->rear = -1;
    q->size = size;
    q->data = NULL; // Initialize data pointer to NULL
    return q;
}

void destroy_queue(queue *q) {
    if (q != NULL) {
        if (q->data != NULL) {
            free(q->data); // Free memory allocated for data array
        }
        free(q); // Free memory allocated for the queue itself
    }
}



void bfs(int***adjmat,int numvertices)
{

    int firstvert = rand() % numvertices;
    int*visited = (int*)malloc(numvertices*sizeof(int));
    queue*q=create_queue(20);
    enqueue(q,firstvert);
    visited[firstvert]=1;
    while(!is_empty(q))
    {
        int vert = dequeue(q);
        printf("%d ", vert); 
        for(int i =0;i<numvertices;i++)
        {
            if((*adjmat)[vert][i]==1 && visited[i] ==0)
            {

                visited[i]=1;
                enqueue(q,i);
            }
        }
    }
    free(visited);


}

int main()
{
    FILE*fp;
    char filename[]="adj.txt";
    char line[100];// assuming max lines is 100
    int counter =0;
    int** adjmatrix;
    int numvertices, numedges;
    int* visited;

    //opening the file
    fp =fopen(filename,"r");
    if(fp==NULL)
    {
        printf("Error loading file !!");
        exit(1);
    }
        // Read lines from the file until the end is reached

    while (fgets(line, sizeof(line), fp)) {

        //the first line that conatins the number of vertices in the graph
        if(counter ==0 )
        {
            numvertices = atoi(line);
            printf("This graph has : %d Vertices \n",numvertices);
            adjmatrix= (int**)malloc(numvertices*sizeof(int));
            for (int i = 0; i < numvertices; i++)
            {
                adjmatrix[i]=(int*) malloc(numvertices*sizeof(int));
            }
            counter++;
            continue;
        }
        //the second lien that conatins the numbger of edges in  the graph
        if(counter ==1)
        {
            numedges= atoi(line);
            printf("The graph contains : %d Edges \n", numedges);
            printf("Adjacent edges are : \n");
            counter++;
            continue;
        }

        //Populate the matrix 

        int vert_01 = line[0]-'A';
        int vert_02 = line[1]-'A';

        printf(" %d%d  \n",vert_01,vert_02);

        adjmatrix[vert_01][vert_02]=1;

        counter++;

    }

    bfs(&adjmatrix,numvertices);

    

}