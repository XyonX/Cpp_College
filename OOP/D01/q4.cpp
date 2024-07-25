/*
Create class student. Using concept of array of objects accepts 5 students’ data
and display the information of topper who scored highest mark in class .

*/

#include <iostream>
#include <string>

using namespace std;

class Student {


private:
    string  name;
    int total_marks;

public:

    void set_name(string n)
    {
        name=n;
    }

    string get_name()
    {
        return name;
    }


    void set_total_marks(int tm)
    {
        total_marks=tm;
    }

    int get_total_marks()
    {
        return total_marks;
    }

};

int main()
{
    Student* Students [5];

    for (int i=0;i<5;i++)
    {
        string input_name;
        int input_tm;

        Student* student = new Student;
        cout<< "Enter Student name : " <<"\n";
         cin.ignore();
        getline(cin,input_name);
        cout <<"Enter Student Total Marks : " <<"\n";
        cin>> input_tm;
        student->set_name(input_name);
        student->set_total_marks(input_tm);

        Students[i]=student;
    }


    Student*topper =nullptr;
    int topmarks=0;

    for(int i=0;i<5;i++)
    {
        int tm = Students[i]->get_total_marks();
        if(tm>topmarks)
        {
            topmarks=tm;
            topper=Students[i];
        }
    }

    cout<< "Topper is Student : "<<topper->get_name() <<"\n";
    cout<< "Top marks is : " <<topper->get_total_marks();




    //clearing student data
    for (int i=0;i<5;i++)
    {
        delete(Students[i]);
    }
}