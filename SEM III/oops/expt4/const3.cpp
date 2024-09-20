#include<iostream>
using namespace std;
int count=0;

class number
{
 int a,b;
 public:
 number() //default constructor
 { a=0;
   b=0;
   count++;
 }
 number(int x,int y)  //Parameteized constructor
 {
  a=x;
  b=y;
  count++;
 }
 number(number &t)  //Copy constructor
 {
  a=t.a;
  b=t.b;
  count++;
 }
 void display()
 {
  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;
 }
 ~ number()      //Destructor
 {
  cout<<count<<endl;
  count--;
  }
};

int main()
{
 number n1;
 n1.display();
 number n2(10,5);
 n2.display();
 number n3=n2;
 n3.display();
 return 0;
}
