//Write a program to calculate the area of circle and triangle using method overloading.
//date:31/08/2023

#include <iostream>
#include<stdlib.h>
using namespace std;
#define pi 3.14

float area(float r)
{
 float a=pi*r*r;
 return(a);
}

float area(float b,float h)
{
 float a=1/2.0*b*h;
 return(a);
}

int main()
{
 int c;
 cout<<"\nEnter 1 to calculate area of circle and 2 for triangle 3 for exit:";
 while(1)
 {
    cout<<"\nEnter your choice:";
    cin>>c;
    switch(c)
    {
    case 1: float r;
            cout<<"\n enter the radius";
            cin>>r;
            cout<<"area of the circle="<<area(r);
            break;
    case 2: float l,b,h;
            cout<<"\n enter the base and height";
            cin>>b>>h;
            cout<<"\n area of triangle="<<area(b,h);
            break;
    case 3: exit(1);
            break;
    default:cout<<"\n Invalid choice:";
            break;
   }
 }
   return 0;
}
