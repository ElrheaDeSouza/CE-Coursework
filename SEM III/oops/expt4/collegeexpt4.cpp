/*Write a program to implement a class ‘Box’ with data members (Length, Breadth,
Height). Include different constructors to initialize data members and also include
members functions to compute surface area and volume of each box objects */
#include<iostream>
using namespace std;
class box
{
 float length;
 float breadth;
 float height;
 public:
 //box()
 void getdata();
 void putdata();
 box(int ength)

 {
   rollno=1;
   name="xyz";
   fees=1000;

 }
void display()
{
 cout<<"\n rollno"<<rollno<<"\t name:"<<name<<"\tfees="<<fees;
}
};
int main()
{
 box s1;
 s1.display();
 return 0;
}


