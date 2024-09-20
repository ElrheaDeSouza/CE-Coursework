#include<iostream>
using namespace std;

int area(float rad)
{
cout<<"Enter the radius of the circle: ";
cin>>rad;
return 3.14*rad*rad;
}

int area(int base, int ht)
{
cout<<"\nEnter the Base and Height of the triangle:"<<endl;
cout<<"Base: ";
cin>>base;
cout<<"Height: ";
cin>>ht;

return 0.5*base*ht;
}

int main()
{
cout<<area(0)<<" is the Area of the circle  "<<endl;
cout<<area(0, 0)<<" is the Area of the triangle  "<<endl;
}

