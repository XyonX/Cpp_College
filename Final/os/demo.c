#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>


int main()
{

    printf("Print 1 ");
    fflush(stdout);
    int id = fork();
    if(id==0)
    {
        printf("Print 2 ");
        fflush(stdout);
    }
}