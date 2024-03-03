#pragma once
#include <stdlib.h>

typedef struct {
    int front, rear;
    int *data;
    int size;
} queue;

int is_empty(queue *q);
int is_full(queue *q);
int enqueue(queue *q, int data);
int dequeue(queue *q);
queue* create_queue(int size);
void destroy_queue(queue *q);