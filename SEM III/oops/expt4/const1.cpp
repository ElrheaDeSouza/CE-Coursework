#include<iostream>
using namespace std;
class student
{
 int rollno;
 string name;
 int fees;
 public:
 student()
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
 student s1;
 s1.display();
 return 0;
}
