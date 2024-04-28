#include <stdio.h>
#include<stdlib.h>
#include<pthread.h>

#define NUM_THREADS 5

// Function to be executed by each thread
void* printMessage(void *arg) {

    printf("CSEN2253 – OS Lab Exam\n");
    pthread_exit(NULL);
}


int main()
{
    pthread_t tids[NUM_THREADS];
    for (int i=0;i<NUM_THREADS;i++)
    {
        pthread_create(&tids[i],NULL,printMessage,NULL);
    }

    pthread_create(&tids[i],NULL,printMessage,NULL);
    for (int i=0;i<NUM_THREADS;i++)
    {
        pthread_join(tids[i],NULL);
    }
}