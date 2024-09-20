/*
a. Print 5.4321 in a 12 field width with trailing zeros
and left justified
b. Print following using set f () functions –
xxxxx4.324e + 01
c. Print following using manipulators +
###1#####+1.0000
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
double a=5.4321;
cout.precision(10);
cout<<setw(12)<<fixed<<a<<endl;

double b=43.24;
cout.fill('x');
cout.precision(3);
cout.setf(ios::scientific,ios::floatfield);
cout<<setw(14)<<b<<endl;

cout<<resetiosflags(ios::floatfield);

double c = 1.0d;
cout.fill('#');
cout.setf(ios::showpos);
cout.setf(ios::internal,ios::adjustfield);
cout<<setw(5)<<c;
cout.setf(ios::showpoint);
cout<<resetiosflags(ios::adjustfield);
cout.precision(4);
cout<<setw(12)<<fixed<<c<<endl;
return 0;
}
