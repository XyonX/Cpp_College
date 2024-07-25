/*
1. a) Define a class to represent a bank account. Include the following members.
Data members
a) Name of the depositor.
b) Account number
c) Balance amount in the account.
Member functions.
a) To assign initial values
b) To deposit an amount.
c) To withdraw an amount after checking the balance
d) To display name and balance.
Write a program in C++ to test the program for any number of customers.

*/

#include <iostream>
#include <string>

using namespace std;

class bankaccount
{

public:

    //Default constructor or 
    //constructor with no param
    bankaccount(){}

    //Constructor with params
    bankaccount( string account_holder_name,
                string an,
                double initial_deposit)
    {
        name=account_holder_name;
        account_number=an;
        balance=initial_deposit;
    }



    void deposit(double  amount)
    {
        balance+= amount;
    }
    void withdrawl(double ammount)
    {
        if(ammount>balance)
        {
            cout<<"Not Enought balacne to Withdraw "<<"\n";
            cout<<"Available balance : "<< balance<<"\n";
            cout << "Choose any amaount between 0  <  " <<balance<<"\n";

        }
        else
        {
            balance-=ammount;
            cout<<"Successfully withdrawn : "<< ammount <<"\n";
            cout<<"Available balance : "<< balance<< "\n";
        }
    }

    void Display()
    {
        cout<< "Bank Account Holder name: "<<name<<"\n";
        cout <<"Bank Account number :  " <<account_number<<"\n";
        cout <<"Bank balance :  " <<balance<<"\n";
    }


private:

    string name;
    string account_number;
    double balance;


};


int main()
{
    bankaccount account1("joydip chakrabory",
                            "12345678791234",
                            1000);

    account1.Display();
}