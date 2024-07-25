#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argv[])


{
    if(argc==1)
    {
        printf("No external argument is passed!! \n");
        printf("The programme name: %c \n",argv[0]);
        getchar(); 
        return 0;

    }
    printf("You passed : %d Command line argument \n",argc-1);

    for(int i =1 ; i < argc; i++)
    {
        printf("%s \n",argv[i]);

    }

    // Wait for user input before exiting
    printf("Press Enter to exit.");
    getchar(); // Consume the newline character from the previous input
    getchar(); // Wait for another Enter key press

    return 0;

}