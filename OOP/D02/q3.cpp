/*
Write a class (named Complex) consisting of two member variable to represent
real part and imaginary part of a complex number and it has three member
functions: void getData(): to take input at runtime for data members. void
showData(): to display the complex number. Complex addComplex(Complex):
to add two complex number and return the result through object.
*/

#include <iostream>
#include <string>

using namespace std;

class Complex
{
    double rp,ip;


    public:

    Complex(){};
    Complex(double realpart, double imaginarypart);

    void GetData();
    void ShowData();

    Complex addComplex(Complex& cp);


};


int main()
{
    Complex c1, c2, result;

    cout << "Enter details for first complex number:" << endl;
    c1.GetData();
    
    cout << "Enter details for second complex number:" << endl;
    c2.GetData();

    result = c1.addComplex(c2);

    cout << "First complex number:" << endl;
    c1.ShowData();
    
    cout << "Second complex number:" << endl;
    c2.ShowData();

    cout << "Sum of the two complex numbers:" << endl;
    result.ShowData();

    return 0;
}

Complex::Complex(double realpart, double imaginarypart)
{
    rp=realpart;
    ip=imaginarypart;

}

void Complex::GetData()
{

    cout<<"Enter Real Part: ";
    cin>>rp;
    cout<<"Enter Imaginary Part: ";
    cin>>ip;
    
}

void Complex::ShowData()
{
    cout<<"Real part is : "<<rp<<endl;
    cout<<"Imaginary part is: "<<ip<<endl;
}

Complex Complex::addComplex(Complex &cp)
{
    return Complex(rp+cp.rp,ip+cp.ip);
}
