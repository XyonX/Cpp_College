/*
Create a structure Student which has 
variables student_ name, roll_no and
functions to accept and display student’s information.


*/
#include <iostream>
#include<string>

using namespace std;

struct Student
{
    string student_name;
    int roll_no;

    void Enter_Info(string name,int roll)
    {
        student_name=name;
        roll_no = roll;
    }
    void Display()
    {
        cout << "Student name is : " <<student_name<< "\n";
        cout <<"Roll Number : "  << roll_no <<"\n";
    }

};



int main()
{
    Student student1;

    string name;
    int roll_number;

    cout<<"Enter student name :";
    getline(cin,name);
    cout<< "Enter roll no :";
    cin >> roll_number;

    student1.Enter_Info(name,roll_number);
    student1.Display();
}