#include"queue.h"


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