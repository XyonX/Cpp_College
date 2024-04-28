#include <stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* PrintWelcome ( void*args)
{
    printf("Welcome from thread \n");
}

int main()
{


    pthread_t tid;
    int res;

    res=pthread_create(&tid,NULL,PrintWelcome,NULL);

    if(res!=0)
    {
        printf("Error creeating thread \n");
    }

    pthread_join(tid,NULL);
}

