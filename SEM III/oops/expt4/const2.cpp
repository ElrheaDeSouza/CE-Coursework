//Parameterized constructor
#include<iostream>
using namespace std;
class line
{
 double length;
 public:
    void setlength(double len);
    double getlength();
    line(double len);  //constructor

};
void line::setlength(double len)
{
length=len;
}
double line::getlength()
{
return length;
}
line::line(double len)
{
length=2;
}
int main()
{
 line l1(10.05);              //implicit declared
 //line.l1=line(10.05);        //explicit declared
 cout<<"length="<<l1.getlength()<<endl;
 l1.setlength(15.5);
 cout<<"length="<<l1.getlength();
 return 0;
}

