#include<stdio.h>
#define MAX_NAME = 128
#define TABLE_SIZE = 10

/*we use has fucntion to stoe and retrive the data in the memory
some hasing functions -k mod 10, k mod n, mid square


// mid square 

For mid quarare fucntion we use the sqr of hte middle number 
for example  for 111 the location will be sqr(1) =1

//fold

in fold method we cut the numebr in two half then add them
and then store them in the sum location
for example 123456
123
456 +
579 is the location

*/
//hash fucntion using k mod 10
// the mod 10 will sate that how many entrty are there in the hash table 
// here the total entry = 0-9 ( as we are usign the mod 10 fucntion)
// Example to store 24 in the table we will use 24 mod 10 = 4




// take hte list { 24,52,91,67,48,83}
// storing the number using k mod 10
/*
number  k mod 10    location
24      24%10       4
52      52%10       2
91      91%10       1
67      67%10       7
48      48%10       8
83      83%10       3

*/

