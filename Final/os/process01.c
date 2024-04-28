#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main()
{

    pid_t pid1, pid2, pid3;
    int status;
    //create first child process
    pid1 = fork();
    if(pid1==0)
    {
        // First child process executes "who"
        execlp("who","who",NULL);
        // If execlp fails
        perror("execlp");
        exit(EXIT_FAILURE);
    }
    else if(pid1 < 0)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    //create the second child
    pid2 = fork();
    if(pid2==0)
    {
        //second child  prcess executes "ls - l"
        execlp("ls","ls","-al",NULL);
        //if execlp fails
        perror("execlp");
        exit(EXIT_FAILURE);
    }
    else if (pid2<0)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    //create the third child
    pid3 = fork();
    if(pid3==0)
    {
        execl("/bin/date","date",NULL);

        //if fails
        perror("execl");
        exit(EXIT_FAILURE);

    }
    else if(pid3<0)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    //PARENT process waits for all child process to finish
    waitpid(pid1,&status,0);
    printf("Child process 1 terminated with status: %d\n", status);
    waitpid(pid2,&status,0);
    printf("Child process 2 terminated with status: %d\n", status);
    waitpid(pid3,&status,0);
    printf("Child process 3 terminated with status: %d\n", status);

    return 0;
}