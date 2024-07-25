/*
Raising a number n to the power p is the same as multiplying n by itself p times.
Write a function called power () that takes a double value for n and an integer value for
p,and that returns the result as a double value. Use a default argument of 2 for p, so
that if this argument is omitted, the number will be squared. Write a main () function
that gets values from the user to test the function.

*/
#include <iostream>


double power(double base, int exponent=2 )
{
    double res=1;
    

    if (exponent == 0)
    {
        return 1;  // Any number raised to the power of 0 is 1
    }


    for(int i=0;i<exponent;i++)
    {
        res*= base;
    }

    return res;

}


int main()
{

    int base =10;
    double res = power(base,5);

    std::cout << "Power of : "<<base << " is :"<<res<<"\n";
}