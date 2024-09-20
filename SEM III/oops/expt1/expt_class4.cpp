//Create a class called ‘calculator’ which implements basic arithmetic operations.

//Date:17-08-2023
#include<iostream>
using namespace std;
class calculator
{
     float num1,num2;

public:
    void getdata();
    void sum();
    void diff();
    void prd();
    void div();
    void putdata();
};
void calculator::getdata()
{
    cout<<"\n Enter two numbers:";
    cin>>num1>>num2;
}
void calculator::sum()
{
 cout<<"\n Sum="<<num1+num2;
}
void calculator::diff()
{
 cout<<"\n Difference="<<num1-num2;
}
void calculator::prd()
{
 cout<<"\n Product="<<num1*num2;
}
void calculator::div()
{
 cout<<"\n quotient="<<num1/num2;
}
int main()
{
    calculator cal;
    int c;
    cout<<"\n Enter 1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n5 for exit";

    while(1)
    {
     cout<<"\n Enter your choice:";
     cin>>c;
     switch(c)
     {
         case 1:cal.getdata();
                cal.sum();
                break;
         case 2: cal.getdata();
                 cal.diff();
                break;
         case 3: cal.getdata();
                 cal.prd();
                break;
         case 4: cal.getdata();
                 cal.div();
                break;
         case 5:exit(1);
                break;
        default:cout<<"\nInvalid choice:";
                break;
     }
    }
}

