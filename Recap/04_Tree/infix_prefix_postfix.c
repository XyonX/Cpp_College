#include <stdio.h>
#include "stack.hpp"
#include <string.h>

/*
precidency list :
()
^
* /
+ -

Associativity list
()  
^   R-L
* / L-R
+ - L-R

*/



char equation[] = "a+b*c";

int main()
{
    int length = strlen(equation);
    int i;
    stack* tempstack=create_stack(length);
    stack* postfixex= create_stack(length);

    for ( i=0;i<length; i++)
    {
        printf("%d th element is %c \n",i, equation[i]);
        if(element[i]==TODO CHECK its a operator or not )

    }


}