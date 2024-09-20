//Write a program to implement virtual base class concept
#include <iostream>
using namespace std;
class A
{
public:
    int a;
    A() // default constructor
    {
        a=30;
    }
};

class B : public virtual A
{
public:
    int b;
    void enter()
    {
        cout<<"enter b";
        cin>>b;
    }
};

class C : public virtual A
{
public:
    int c=6;
};

class D : public B, public C
{
public:
    int sum()
    {
        cout<<a+b+c;
    }
};

int main()
{
    int c;

    D object;
    object.enter();
    object.sum();
    return 0;
}
