#include <stdio.h>
#include<stdlib.h>

#ifndef MAX
#define MAX 10
#endif

int is_prime(int n)
{
    if(n<2)
    {
        return 0;
    }
    int i;
    for (i=2;i<= n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc ,char* argv[])
{
    if(argc ==1)
    {
        printf("No cli argument is passed please pass the argument to be processed!!!\n");
    }
    int N;
    if(argc >>1 )
    {
        N=atoi(argv[1]);
        printf("You Entered :%d To be processed \n",atoi(argv[1]));
    }
    if( !((N >=1 )&& (N<=MAX)))
    {
        printf("Number in invalid range !!!\n");
    }
    
    printf("This program prints the first N prime numbers. N is a number.\n");

    printf("Usage: %s <N>\n", argv[0]);

    int i;

    for (i=0;i<N;i++)
    {
        if(is_prime(i))
        {
            printf("%d \n",i);
        }
    }
}