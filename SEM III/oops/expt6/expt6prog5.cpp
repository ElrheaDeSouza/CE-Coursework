//Write a program to overload binary minus operator

#include<iostream>
using namespace std;
class NumberValue
{ int num;
public:
NumberValue (){num=0;}
NumberValue(int n){
    num=n;}

void operator-()
{ num=-num;}
void display()
{ cout<<"value:"<<num;}
};
int main()
{ NumberValue n1;
 int x;
 cout<<"\n Enter a number:";
 cin>>x;
 n1=NumberValue(x);
cout<<"Original";
n1.display();
-n1;
cout<<endl<<"new value:";
n1.display();
return 0;
}
