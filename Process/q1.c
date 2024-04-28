#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>


// write a programme to get the pid of parent andchild 
int main()
{
    printf("i am the parent process : %d",getpid());
    pid_t  child_pid = fork();
    if(child_pid<0)
    {
        printf("Error in child process creation \n");
        
    }
    else if (child_pid ==0)
    {
        printf("Child process is created with child pid: %d , with parent pid: %d",getpid(),getppid());
    }

}


