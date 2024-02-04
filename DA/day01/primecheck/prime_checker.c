#include<stdio.h>
#include<stdlib.h>

#ifndef MAX
    #define MAX 100
#endif

int is_prime(int n)
{
    if(n<2)
    {
        return 0;
    }
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i ==0)
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char*argv[])

{
    if (argc == 1) {
        printf("This program prints first N prime numbers. N is a number. Usage: NPRIME <N>\n");
        return 0; // Return error code
    }

    int N=atoi(argv[1]);

    if(N<1 || N>MAX)
    {
        printf("N should be between 1 and %d (inclusive).\n", MAX);
        return 0;
    }
    // Generate and print the first N prime numbers
    printf("First %d prime numbers:\n", N);

    int i;
    for(i=2;i<=N;i++)
    {
        if(is_prime(i))
        {
            printf("%d \n",i);
        }
    }
}



//input 
//gcc prime_checker.c -o pc
//./pc.exe 50
/*
2 
3 
5 
7 
11 
13 
17 
19 
23 
29 
31
37
41
43
47


*/



