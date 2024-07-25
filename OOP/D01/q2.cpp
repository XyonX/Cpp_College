/*
Create a class which has private data members and public member functions to
accept and display private data members. Implement in C++.

*/


#include <iostream>


using namespace std;

class Employee
{

private:


    int ID;

public:

    void SetID()
    {
        
        cout << "Enter Employee ID : ";
        cin >> ID;
    }

    void Showid()
    {
        cout << "Employee ID is : "<< ID << "\n";
    }

};


int main()

{

    Employee emp1;

    emp1.SetID();
    emp1.Showid();


    return 0;
}