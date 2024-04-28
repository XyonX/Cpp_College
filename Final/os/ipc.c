#include<unistd.h>
#include<apue.h>


int main()
{
    /*
    int n,fd[2];
    pid_t pid;

    if(pipe(fd)<0)
    {
        err_sys("pipe error");
    }
    if(pid=fork())
    {

    }*/

    FILE*rd;
    char buffer[50];
    sprint(buffer,"operating system");

    rd=popen("wc -c","w");
    fwrite(buffer,sizeof(int),strlen(buffer),rd);
    pclose(rd);

}