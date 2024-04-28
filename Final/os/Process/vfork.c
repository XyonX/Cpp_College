#include <stdio.h>
#include <unistd.h>
#include<sys/wait.h>

int globalVar = 10;


int main()
{
    int localVariable = 20;

    int pid = vfork();

    if(pid ==-1)
    {
        printf("Error in Process creation \n");
    }
    else if (pid==0)
    {
        globalVar++;
        localVariable++;
        printf("Global Variable :%d , Local Variable: %d \n",globalVar,localVariable);
        _exit(0);
        
    }
    else
    {
        globalVar++;
        localVariable++;
        printf("Global Variable :%d , Local Variable: %d \n",globalVar,localVariable);
    }

}