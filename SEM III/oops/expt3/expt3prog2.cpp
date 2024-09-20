//Write a program to calculate the volume of cube and cylinder using method overloading
//date:31/08/2023
#include <iostream>
#include <stdlib.h>
using namespace std;
#define pi 3.14

float vol(float a)
{
 float v=a*a*a;
 return(v);
}

float vol(float r,float h)
{
 float v=pi*r*r*h;
 return(v);
}

int main()
{
 int c;
 cout<<"\nEnter 1 to calculate volume of cube and 2 for cylinder 3 for exit:";
 while(1)
 {
    cout<<"\nEnter your choice:";
    cin>>c;
    switch(c)
    {
    case 1: float a;
            cout<<"\n enter the side:";
            cin>>a;
            cout<<"volume of the cube="<<vol(a);
            break;
    case 2: float r,h;
            cout<<"\n enter the radius and height:";
            cin>>r>>h;
            cout<<"\nVolume of cylinder="<<vol(r,h);
            break;
    case 3: exit(1);
            break;
    default:cout<<"\n Invalid choice:";
            break;
    }
 }
   return 0;
}
