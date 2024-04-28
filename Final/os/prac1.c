#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>

int main()
{

    int n;
    int id = fork();


    if(id==0)
    {
        n=1;
        printf("The id of the forked procss is :%d , and the parnet is:%d \n",getpid(),getppid());
        printf("Result of fork from new thread:%d \n",id);
    }
    else
    {
        n=1+5;
        int res =wait(NULL);
        printf("Child process %d finished execution \n",res);
        printf("Result of fork from main thread:%d \n",id);
        printf("The id of the main process is :%d and the parent is :%d \n",getpid(),getppid());
    }
    for(int i=n;i<n+5;i++)
    {
         printf("%d \t",i);
         fflush(stdout);
    }
    printf("\n");

}