//Write a program to add two 'complex' class objects using operator overloading concept.Overload binary operator'+'

#include<iostream>
using namespace std;

class Complex
{
    int num1, num2;
public:
    void accept()
    {
            cout<<"\n Enter Two Complex Numbers : ";
            cin>>num1>>num2;
    }

    //Overloading '+' operator using Friend function
    friend Complex operator+(Complex c1, Complex c2);

    void display()
    {
            cout<<num1<<" and "<<num2<<"i"<<"\n";
    }
};
Complex operator+(Complex c1, Complex c2)
{
    Complex c;
    c.num1=c1.num1+c2.num1;
    c.num2=c1.num2+c2.num2;
    return(c);
}
int main()
{
    Complex c1,c2, sum;      //Created Object of Class Complex i.e c1 and c2

    c1.accept();  //Accepting the values
    c2.accept();

    sum = c1+c2;   //Addition of object

    cout<<"\n Entered Values : \n";
    cout<<"\t";
    c1.display();    //Displaying user input values
    cout<<"\t";
    c2.display();

    cout<<"\n Addition of Real and Imaginary Numbers : \n";
    cout<<"\t";
    sum.display();  //Displaying the addition of real and imaginary numbers

    return 0;
}
