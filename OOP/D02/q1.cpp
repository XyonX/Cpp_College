
/*
Write a class Time which has three data member hour, minute and second and
three member functions: setTime(list of arguments) : Which set three data
members of class addTime( Time): To add two time values where one time
value(object) is passed as argument of addTime().showTime(): To display the
time information.


*/

#include <iostream>
#include <cstring>

using namespace std;


class Time
{
    int hour,minute,second;


    public:


    void setTime(int h,int m,int s);
    void addTime(Time& t);

    void showTime() const;
};

int main()
{
    Time t1, t2, t3;
    
    t1.setTime(2, 45, 30);
    t2.setTime(1, 20, 40);
    
    t3 = t1; // Initialize t3 with t1
    t3.addTime(t2); // Add t2 to t3
    
    cout << "Time 1: ";
    t1.showTime();
    
    cout << "Time 2: ";
    t2.showTime();
    
    cout << "Combined Time: ";
    t3.showTime();
    
    return 0;
}

void Time::setTime(int h, int m,int  s)
{

    if (h < 0 || m < 0 || s < 0) {
        cout << "Invalid time value" << endl;
        return;
    }
    hour=h;
    minute=m;
    second=s;

    
}

void Time::addTime(Time &t)
{
    
    second+=t.second;
    minute+=t.minute+second/60;
    hour+=t.hour+minute/60;

    second %= 60;
    minute %= 60;
}

void Time::showTime()const
{
    cout<<"Hours: "<<hour<<" Minutes: "<<minute<<" Seconds: "<<second<<endl;
}
