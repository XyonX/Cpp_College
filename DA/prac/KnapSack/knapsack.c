#include <stdio.h>
#include <stdlib.h>

#define BUFFER 20

void knapsack(int num, float weight[],float profit[],int capacity )
{
    int x[BUFFER],totalProfit;
    int i,j,u;

    u=capacity;

    for (i=0;i<num;i++)
    {
        x[i]=0;
    }

    for(i=0;i<num;i++)
    {
        if(weight[i]>u)
        {
            break;
        }
        x[i]=1;
        totalProfit+=profit[i];
        u-=weight[i];

    }

    if(i<num)
    {
        x[i]=u/weight[i];
    }

    totalProfit=totalProfit+(x[i]*profit[i]);

    printf("The result vector is :");

    for(i=0;i<num;i++)
    {
        printf("%f \t", x[i]);
    }

    printf("Maximun profit is : %f",totalProfit);

     
}


int main()
{
    float weight[BUFFER],profit[BUFFER], capacity;

    int num,i,j;
    float ratio[BUFFER], temp;

    printf("Enter the number of objects: ");
    scanf("%d",&num);

    printf(" Enter the weight and profit of each objects: \n");

    for (i=0;i<num;i++)
    {
        scanf("%f %f" , &weight[i],&profit[i]);
    }

    printf("\n Enter the capacity of knapsack :");

    for(i=0;i<num;i++)
    {
        ratio[i]=profit[i]/weight[i];
    }

    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(ratio[i] < ratio[j])
            {
                temp=ratio[i];
                ratio[i]=ratio[j];
                ratio[j]=temp;

                temp=weight[i];
                weight[i]=weight[j];
                weight[j]=temp;

                temp=profit[i];
                profit[i]=profit[j];
                profit[j]=temp;

            }
        }
    }




}