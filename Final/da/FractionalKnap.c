/*
In today’s lab, we introduce greedy algorithm, which is an optimization problem. This always makes the choice 
that looks best at the moment and adds it to the current subsolution. Greedy algorithms don’t always yield 
optimal solutions but, when they do, they’re usually the simplest and most efficient algorithms available.
A thief goes to a house to steal n items having price values but his knapsack can hold only a fixed amount of 
weight. He needs to select the items he steals very smartly so that he maximizes the amount of money he can 
make from them. The items can be taken in parts or whole. If a set of items are given, each with a weight and a 
value, the goal is to select a subset of the items that maximises the value while keeping the total weight below 
or equal to a given limit.
Example:
We have 5 items {I1, I2, I3, I4, I5} having weights {300, 500, 100 ,700, 400} respectively and the price of the 
respective weights as {1500, 1000, 900, 1400, 1200}. Given the maximum capacity of the knapsack as 1500, 
we need to find the set of items to be selected such that the price is maximized.
In Fractional Knapsack approach, the thief can take a fraction of an item. To solve, sort items by decreasing cost 
per weight. For the 5 items {I1, I2, I3, I4, I5, cost per weight = {1500/300, 1000/500, 900/100, 1400/700, 
1200/400} i.e. {5, 2, 9, 2, 3} respectively. Sorting items by decreasing price per weight is then {I3, I1, I5, I2, 
I4} respectively. We start filling up target of 1500 with items as much as possible in decreasing price per weight. 
So, we choose whole of {I3, I1, I5, I2} that occupies 100, 300, 400, 500, totalling 1300 and remaining 200 by 
taking 200/700 i.e. 2/7th of I4.
Formally stating the problem statement, we have 5 items {I1, I2, I3, I4, I5} having weights {300, 500, 100, 700,
400} respectively and the price of the respective weights as {1500, 1000, 900, 1400, 1200}. Given the maximum 
capacity of the knapsack as 1500, we need to find the set of items to be selected such that the price is maximized. 
1. Write a program to compute the total price and fractions of items to take to optimize the solution in greedy 
approach using descending order of price of the items.
(Expected Ans: Price: 4300, Order of Items: {I1, I4, I5, I2, I3} and Fraction of Items: {1, 1, 1, 1/5. 0} 
respectively)
2. Write a program to compute the total price and fractions of items to take to optimize the solution in greedy
approach using descending order of price per weight of items.
(Expected Ans: Price: 5000, Order of Items: {I3, I1, I5, I2, I4} and Fraction of Items: {1, 1, 1, 1, 2/7} 
respectively

*/

#include <stdio.h>
#include <stdlib.h>

// Structure to represent an item
struct Item {
    int weight;
    int price;
    int index; // To keep track of the original index of the item
};

// Function to perform fractional knapsack
void fractionalKnapsack(struct Item arr[], int n, int capacity) {
    // Sort items based on price per weight in descending order
    for (int i = 0; i < n; i++) {
        arr[i].index = i + 1; // Assigning original index
    }

    // Bubble sort (can be replaced with a more efficient sorting algorithm)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            double ratio1 = (double)arr[j].price / arr[j].weight;
            double ratio2 = (double)arr[j + 1].price / arr[j + 1].weight;
            if (ratio1 < ratio2) {
                // Swap items
                struct Item temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    double totalPrice = 0;
    double fractions[n];

    // Initialize fractions array
    for (int i = 0; i < n; i++)
        fractions[i] = 0.0;

    // Fill knapsack greedily
    for (int i = 0; i < n; i++) {
        if (arr[i].weight <= capacity) {
            fractions[arr[i].index - 1] = 1.0;
            totalPrice += arr[i].price;
            capacity -= arr[i].weight;
        } else {
            fractions[arr[i].index - 1] = (double)capacity / arr[i].weight;
            totalPrice += fractions[arr[i].index - 1] * arr[i].price;
            break;
        }
    }

    // Print total price and fractions of items
    printf("Price %.2lf\n", totalPrice);
    printf("Order of Items: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i].index);
    printf("\nFraction of Items: ");
    for (int i = 0; i < n; i++)
        printf("%.2lf ", fractions[i]);
    printf("\n");
}

