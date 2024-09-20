/*
#include<iostream>
using namespace std;
class box
{
    int length,breadth,height;
public:
    void setlength(int l);
    void setbreadth(int b);
    void setheight(int h);
    int getlength();
    int getbreadth();
    int getheight();
    void display();
};
void box::setlength(int l){ length=l;}
void box::setbreadth(int b){breadth=b;}
void box::setheight(int h){height=h;}

int box:: getlength(){return length;}
int box::  getbreadth(){return breadth;}
int box::getheight(){return height;}
void box::display() {cout<<"volume is "<<(length*breadth*height)<<endl<<"surface area is "<<2*(length*breadth+length*height+breadth*height)<<endl;}

int main()
{
   box b;
   b.setlength(6);
   b.setbreadth(10);
   b.setheight(7);
   b.display();
   return 0;
}
*/
/*
#include <iostream>
using namespace std;
class box
{
    int length,breadth,height;
    public:
    void setlength(int l);
    void setbreadth(int b);
    void setheight(int h);
    int getlength();
    int getbreadth();
    int getheight();
    void display();
};
void box::setlength(int l){length=l;}
void box::setbreadth(int b){breadth=b;}
void box::setheight(int h){height=h;}

int box::getlength() {return length;}
int box::getbreadth() {return breadth;}
int box::getheight() {return height;}
void box::display() {cout<<"volume is "<<(length*breadth*height)<<endl<<"surface area is "<<2*(length*breadth+length*height+breadth*height)<<endl;}


int main()
{
    box b;
    b.setlength(2);
    b.setbreadth(3);
    b.setheight(4);
    b.display();
    return 0;
}
*/
/*Create a class called Box with data member length,breadth and height. Use setter and getter functions
and display the volume and surface area of different box objects.*/

#include<iostream>
#include<stdlib.h>
using namespace std;
class box
{
    float length,breadth,height;
public:
    void setlength(int l);
    void setbreadth(int b);
    void setheight(int h);
    void getlength();
    void getbreadth();
    void getheight();
    void display();
};
void box::setlength(int l){length=l;}
void box::setbreadth(int b){breadth=b;}
void box::setheight(int h){height=h;}

void box::getlength()
{
    cout<<"\n Enter the length:";
    cin>>length;
}
void box::getbreadth()
{
    cout<<"\n Enter the breadth:";
    cin>>breadth;
}
void box::getheight()
{
    cout<<"\n Enter the height:";
    cin>>height;
}
void box::display()
{
    cout<<"\n The volume is:"<<length*breadth*height;
    cout<<"\n The surface area is:"<<2*(length*breadth+length*height+breadth*height)<<endl;
}
   int main()
   {
   box b;
   int c,n;
   while(1)
   {   cout<<"\n Enter 1 for performing the operation\n Enter 2 for exit";
       cin>>c;
       switch(c)
       {
       case 1:b.getlength();
              b.getbreadth();
              b.getheight();
              b.display();
              break;

      case 2: exit(1);
              break;

      default:cout<<"\n Invalid choice:";
              break;
   }
   }
   }
