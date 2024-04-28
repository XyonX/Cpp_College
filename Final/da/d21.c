#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE_NAME 20
#define MAXSIZE_ROLL 4
#define MAX

typedef struct _s
{
    char Name [MAXSIZE_NAME+1];
    char roll [MAXSIZE_ROLL+1];
    int score;
}student;

int compare_student(void*rec1,void*rec2)
{
    student*s1 = (student*)rec1;
    student*s2 = (student*)rec2;

    return strcmp(s1->roll,s2->roll);
}

void insert(student*pArray; int maxCapacity, int currentSize,int (*compfun) (void*,void*) )
{


    student newStudent;

    // Input new student details
    printf("Enter Student Name: ");
    scanf("%MAXSIZE_NAMEs", newStudent.name);
    printf("Enter Roll No: ");
    scanf("%MAXSIZE_ROLLs", newStudent.rollNo);
    printf("Enter Score: ");
    scanf("%d", &newStudent.score);

    int pos =0;
    int i;

    while(pos<MAX && compfun(newStudent,pArray[pos]))
    {
        pos++
    }

    for(i=MAX ;i>=0;i--)
    {
        
    }

}

int main()
{
    student students [3];




}