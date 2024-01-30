#include<stdio.h>
#include<stdlib.h>


int is_prime(int n)
{
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
    if(argc==1)
    {
        printf("You didnt passed any inut to run the programme!!");
        printf("Please provide the argument and try again");
    }
    else
    {

        int input=atoi(argv[1]);
        printf("Thhe input is :%d \n",input);

        int i;
        for(i=2;i<input;i++)
        {
            if(is_prime(i))
            {
                printf("%d \n",i);
            }
        }
    }
}
