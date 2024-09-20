//program 9:to find force between 2 charges
//Date:04/08/2023

#include<iostream>
using namespace std;
int main()
{
    int q1,q2,r1,r2;
    float e=8.8542,F,pi=3.1415;
    cout<<"\n Enter the point charges:";
    cin>>q1>>q2;
    cout<<"\n Enter the distance between the charges:";
    cin>>r1>>r2;
    F=((1/4*pi*e)*(q1*q2/r1*r1))*r2;
    cout<<"\n the force="<<F;
    return 0;
}
