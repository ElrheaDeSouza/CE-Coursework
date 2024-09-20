
/*Create two classes employee and payscale in an external namespace stored in a user defined header
file ‘payslip.h’. Assume necessary data members and use setter and getter function to initialize and
retrieve data member values. Use an array of object to display the payslip of each employee.*/
//Date:17-08-2023

#include<iostream>
#include<stdlib.h>
#include"payslip.h"
using namespace std;
using namespace Payslip;

int main()
{
	Employee e[10];
	Payscale p[10];
	int c,n;

     cout<<"Enter number of employees you wish to add: ";
     cin>>n;
     for(int i=0; i<n; i++)
        {
         e[i].getdata();
         p[i].getsal();
        }

        for(int i=0; i<n; i++)
        {
        e[i].setdata();
        p[i].setsal();
        }
	return 0;
    }
