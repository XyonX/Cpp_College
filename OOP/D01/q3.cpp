
//q3
/*
Instead of structure use class for student defined in Question 1.

*/
//q1 ref

/*
Create a structure Student which has 
variables student_ name, roll_no and
functions to accept and display student’s information.
*/

#include <iostream>
#include<string>

using namespace std;

class Student
{

private:

    string student_name;
    int roll_no;

public:

    void Enter_Info(string name,int roll)
    {
        student_name=name;

        while(roll<0)
        {
            cout<< "Invalid input , Enter a valid Roll Number (Positive int ) : ";
            cin >> roll;
        }
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