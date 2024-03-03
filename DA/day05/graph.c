
#include<stdio.h>
#include<stdlib.h>

typedef struct _graph{

    int** adjmatrix;
    int numvertices;
    int*visited;

}graph;


typedef struct {
    
    int *data;
    int front;
    int rear;
    int size;
} queue;

queue* create_queue(int size) {
    queue *q = (queue *)malloc(sizeof(queue)); // Allocate memory for the queue
    if (q == NULL) {
        printf("Memory allocation failed.\n");
        return NULL; // Return NULL if memory allocation fails
    }
    q->front= -1;
    q->rear = -1;
    q->size = size;
    
    q->data = (int *)malloc(size * sizeof(int)); // Allocate memory for data

    if (q->data == NULL) {
        printf("Memory allocation failed.\n");
        free(q); // Free previously allocated memory
        return NULL; // Return NULL if memory allocation fails
    }

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





void bfs(graph* g)
{
    printf("FAWF \n");
    int firstvert = 1;
    queue*q=create_queue(100);
    enqueue(q,firstvert);
    g->visited[firstvert]=1;
    printf("FAWF");
    
    while(!is_empty(q))
    {
        int vert = dequeue(q);
        printf("%d ", vert); 
        for(int i =0;i<g->numvertices;i++)
        {
            if(g->adjmatrix[vert][i]==1 && g->visited[i] ==0)
            {

                g->visited[i]=1;
                enqueue(q,i);
            }
        }
    }
    free(g->visited);


}


int main()
{
    FILE*fp;
    char filename[]="adj.txt";
    char line[500];// assuming max lines is 100
    int counter =0;
    int numvertices, numedges;
    graph* g =  (graph*)malloc(sizeof(graph));

    //opening the file
    fp =fopen(filename,"r");
    if(fp==NULL)
    {
        printf("Error loading file !!");
        exit(1);
    }
        // Read lines from the file until the end is reached

    while ( !feof(fp) && fgets(line, sizeof(line), fp)) {
        printf("%d \n",counter);

        //the first line that conatins the number of vertices in the graph
        if(counter ==0 )
        {
            numvertices = atoi(line);

        // Creating the adj matrix based on the vertices data 
        g->adjmatrix = (int**)malloc(numvertices * sizeof(int*));
        for (int i = 0; i < numvertices; i++) {
            g->adjmatrix[i] = (int*)malloc(numvertices * sizeof(int));
        }
            counter++;
            continue;
        }
        //the second lien that conatins the numbger of edges in  the graph
        if(counter ==1)
        {
            numedges= atoi(line);
            counter++;
            continue;
        }

        //Populate the matrix 

        int vert_01 = line[0]-'A';
        int vert_02 = line[1]-'A';

        g->adjmatrix[vert_01][vert_02]=1;

        counter++;

    }
    printf("Test Message");
    bfs(g);
    

}