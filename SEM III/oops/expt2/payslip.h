//External file
#include<iostream>
using namespace std;
namespace Payslip
{
	class Employee
	{
    char empname[30];
    char empid[10];
    char empdept[15];
public:
    void getdata();
    void setdata();
	};

void Employee::getdata()
{
 cout<<"Enter employee name: ";
 cin>>empname;
 cout<<"\nEnter employee ID: ";
 cin>>empid;
 cout<<"\nEnter department: ";
 cin>>empdept;
}
void Employee::setdata()
{
 cout<<"Employee Name: "<<empname<<endl;
 cout<<"Employee ID: "<<empid<<endl;
 cout<<"Employee Department: "<<empdept<<endl;
}
 class Payscale
 {
 double medicalcharges;
 double travelAllow;
 double basePay;
 double salary;
public:
 void getsal();
 void setsal();
};
void Payscale::getsal()
{
 cout<<"Enter basic pay: "<<endl;
 cin>>basePay;
 cout<<"Enter medical charges allowance: "<<endl;
 cin>>medicalcharges;
 cout<<"Enter travel allowance: "<<endl;
 cin>>travelAllow;
 salary = (medicalcharges+travelAllow+basePay);
	}
void Payscale::setsal()
{
 cout<<"Employee Salary is: "<<salary<<endl;
}
}
