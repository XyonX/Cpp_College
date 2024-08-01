#include <iostream>
#include <string>


using namespace std;

class bankaccount
{
    
    string name,accnum;
    double balance;

public:

    bankaccount(){}

    //Constructor with params
    bankaccount( string account_holder_name,
                string an,
                double initial_deposit)
    {
        name=account_holder_name;
        accnum=an;
        balance=initial_deposit;
    }

    void Display()
    {
        cout<< "Bank Account Holder name: "<<name<<"\n";
        cout <<"Bank Account number :  " <<accnum<<"\n";
        cout <<"Bank balance :  " <<balance<<"\n";
    }


    //By Ref
    void moneytransfer(bankaccount & target_acc, double amount)
    
    {
        if(amount > balance)
        {
            cout<<"Not Enought balance "<<endl;

        }
        balance-=amount;
        target_acc.balance+=amount;

        cout<<"Ref pass function called"<<endl;
    }

    //By Pointer
    void moneytransfer(bankaccount * target_acc, double amount)
    
    {
        if(amount > balance)
        {
            cout<<"Not Enought balance "<<endl;

        }
        balance-=amount;
        target_acc->balance+=amount;

        cout<<"pointer pass function called"<<endl;
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

};

int main()
{

    bankaccount ba1("joydip chakraborty",
                   "123456789",
                   1000 );
                
    ba1.deposit(2000);
    ba1.Display();

    bankaccount ba2("joydipp chakrabortyy",
                   "1234567890",
                   1000 );
                
    ba2.deposit(5000);
    ba2.Display();

    //passed by ref
    ba1.moneytransfer(ba2,1000);
    //passed by pointer
    ba1.moneytransfer(&ba2,1000);

    ba1.Display();
    ba2.Display();


}