/*
#include <iostream>
using namespace std;
#include<stdlib.h>

class Complex {
private:
    double real;
    double imaginary;

public:
    // Constructor
    Complex(double real=0, double imaginary=0): real(real),imaginary(imaginary){}

    // Friend function to add two complex numbers
    friend Complex add(Complex c1, Complex c2);

    // Getter functions
    double getReal() { return real; }
    double getImaginary() { return imaginary; }
};

// Friend function to add two complex numbers
Complex add(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}

int main() {
    int c;
    int real,imaginary,r,i;
    cout<<"\n Enter 1 to perform addition \t 2 for exit:";

    while(1)
    {
         cout<<"\n Enter your choice:";
         cin>>c;
      switch (c)
      {
        case 1:{
                cout<<"\n Enter the first number with real and imaginary part of a number:";
                cin>>real>>imaginary;
                cout<<"\n Enter the second number with real and imaginary part of a number:";
                cin>>r>>i;
                // Create two complex numbers
                Complex c1(real,imaginary);
                Complex c2(r,i);

                // Add the two complex numbers
                Complex c3 = add(c1, c2);

                // Print the result
                cout << "The sum of the two complex numbers is: " << c3.getReal() << " + " << c3.getImaginary() << "i" << endl;

                break;}

        case 2:{exit(1);
               break;}
        default:cout<<"\n Invalid choice :";
                break;

      }
    }

    return 0;
}
*/

//oR

/*Write a program to design a class complex to represent complex numbers. The
complex class should use an external function (use it as friend function) to add
two complex numbers. The function should return an object of type complex
representing the sum of two complex numbers.*/
//Date:4/10/2023

#include <iostream>
#include <stdlib.h>

using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    void getdata()
    {
        cout << "Enter the real part and imaginary part: ";
        cin >> real>>imaginary;
    }

    void putdata() {
        cout << "The complex number is: " << real << " + " << imaginary << "i" << endl;
    }

    friend Complex add(Complex c1, Complex c2);
};

Complex add(Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    return c3;
}

int main()
{   int c;
while(1)
{
    cout<<"\n Enter 1 to calculate \t 2 to exit";
    cout<<"\n Enter your choice:";
    cin>>c;
    switch(c)
    {
    case 1:{
            Complex c1, c2, c3;
            c1.getdata();
            c2.getdata();
            c3 = add(c1, c2);
            c3.putdata();
            break;
           }
    case 2:{
           exit(1);
           break;
           }
    default:cout<<"INVALID CHOICE...";
    }
}

    return 0;
}

