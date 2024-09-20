//Write a program to calculate the gross pay of regular and contract employees using method overloading.
//date:31/08/2023

#include<iostream>
#include<stdlib.h>
using namespace std;
int GrossPay(float charge, int hrs)
{
    int n;
    cout<<"\n Enter the number of days worked:";
    cin>>n;
	float payment=(charge*hrs);
	cout<<"The Gross Payment is "<<payment*n<<endl;
}
int GrossPay(int base_pay, int medallow, float travallow )
{
	float payment =base_pay+medallow+ travallow;
	cout<<"The Gross Payment is "<<payment<<endl;
}

int main()
{
 int c;
 while(1)
 {
    cout<<"\n Enter 1 for contact employee 2 for regular employee 3 for exit";
    cout<<"Enter choice: ";
    cin>>c;
    switch(c)
    {
    case 1:
        int charge, hrs;
        cout<<"Enter your charge per hour: ";
        cin>>charge;
        cout<<"Enter number of hours worked: ";
        cin>>hrs;
        GrossPay(charge,hrs);
        break;
    case 2:
        int base_pay,medallow ,travallow;
        cout<<"Enter basic pay: ";
        cin>>base_pay;
        cout<<"Enter medical allowance: ";
        cin>>medallow;
        cout<<"Enter travel allowance: ";
        cin>>travallow;
        GrossPay(base_pay,medallow ,travallow);
        break;
    case 3:
        exit(1);
    default:
        cout<<"Invalid Choice"<<endl;
        break;
    }
 }
	return 0;
}
