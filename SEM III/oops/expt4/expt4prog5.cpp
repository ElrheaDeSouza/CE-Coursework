/*Write a program to implement a class ‘Complex Nos’ with data members(real,imag).
Include parameterised and copy constructors to initialize data members and also
include members functions to compute and display the sum and difference of complex
nos.*/

#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    // Default constructor
    Complex()
    {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(double real, double imag)
       : real(real),imag(imag){}


    // Copy constructor
    Complex(const Complex &temp) {
        real = temp.real;
        imag = temp.imag;
    }

    // Member functions to compute and display the sum and difference of complex numbers
    Complex add(Complex temp)
    {
        Complex result;
        result.real = real + temp.real;
        result.imag = imag + temp.imag;
        return result;
    }

    Complex subtract(Complex temp) {
        Complex result;
        result.real = real - temp.real;
        result.imag = imag - temp.imag;
        return result;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // Create two complex numbers using the parameterized constructor
    Complex c1(2, 3);
    Complex c2(4, 5);

    // Display the complex numbers
    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();

    // Compute the sum and difference of the complex numbers
    Complex sum = c1.add(c2);
    Complex difference = c1.subtract(c2);

    // Display the sum and difference
    cout << "Sum = ";
    sum.display();
    cout << "Difference = ";
    difference.display();

    return 0;
}

