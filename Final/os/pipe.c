#include<stdio.h>
#include <unistd.h>

#define MAXLINE 1000

int main()
{
/**
    if(pipe(fd)<0)
    {
        err_sys("pipe error");
    }
    if(pid= fork()<0)
    {
        err_sys("Fork error");
    }
    // In the parent process
    else if(pid>0)
    {
        //closing the read
        close(fd[0]);
        write(fd[1],"hellow\n",12);
    }
    else
    {
        close(fd[1]);
        n=read(fd[0],line,MAX_LINE);
        write(STDOUT.FILENO,line,n);
    }

    exit(0);*/

    int n,fd[2];
    pid_t pid;
    char line[MAXLINE];

    if(pipe(fd)<0)
    {
        printf("pipe error");
    }
    printf(" fd0 :%d\t fd1:%d",fd[0],fd[1]);

    pid= fork();
    if(pid<0)
    {
        printf("Fork error");
    }
    else if(pid>0)
    {
        //closing the read
        close(fd[0]);
        write(fd[1],"hellow\n",12);
    }
    else
    {
        close(fd[1]);
        n=read(fd[0],line,MAX_LINE);
        write(STDOUT.FILENO,line,n);
    }

}