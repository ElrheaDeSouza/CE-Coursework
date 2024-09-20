//Write a program to demonstrate multiple catch statements
#include<iostream>
using namespace std;

int main()
{
 float a,b;
 int x,y;
 cout<<"\n Enter two numbers:";
 cin>>a>>b;
 try
 {
 if(b==0)
 throw 0;
 else
 cout<<"\n Result="<<a/b;
 }
 catch( int z)
 {
 cout<<"\n Denominator is 0";
 }
 catch(...) // Default case
 {
 cout<<"\n Some unknown exception occurred";
 }

 cout<<"\nEnter the value of x and y:";
cin>>x>>y;
try{
if(x==0)
throw 0;
cout<<"\nResult="<<x*y;
}

 catch(float w)
 {
 cout<<"\nMultiplication is zero";
 }
 catch(...) // Default case
 {
 cout<<"\n Some unknown exception occurred";
 }
 cout<<endl;
 return 0;
}
