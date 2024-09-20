/*Create two class DM and DB which store the value distances. DM stores distances
in metres and centimetres and DB in feet and inches. Write a program that can
read values for the class objects and add one object of DM with another object of
DB. Use a friend function to carry out the addition operation. The object that
stores the results maybe a DM object or DB object, depending on the units in
which the results required. The display should be in the format of feet and inches
or metres and centimetres depending on the object on display. */

#include<iostream>
#include<stdlib.h>
using namespace std;

class DB;

class DM
{

 float meters, centimeters;

 public:
 void setmeters(float m)
 {meters=m;}

 void setcenti(float c)
 {centimeters=c;}

 void setvalues(float m, float c)
 {meters=m,centimeters=c;}

 float getmeters()
 {return meters;}

 float getcenti()
 {return centimeters;}

 friend DM add(DM,DB);
 friend DB add(DB,DM);
};

class DB
{

 float feet, inches;

 public:
 void setfeet(float f)
 {feet=f;}
 void setinches(float i)
 {inches=i;}
 void setvalues(float f, float i)
 {feet=f,inches=i;}

 float getfeet()
 {return feet;}

 float getinches()
 {return inches;}

 friend DM add(DM,DB);
 friend DB add(DB,DM);
};

DM add(DM m, DB b)
{
 float meters,centi;
 DM dm;
 meters = m.getmeters()+(b.getfeet()/3.281);
 centi = m.getcenti()+(b.getinches()*2.54);
 dm.setvalues(meters,centi);
 return dm;
}

DB add(DB b, DM m)
{
 float feet,inches;
 DB db;
 feet = (m.getmeters()* 3.281)+b.getfeet();
 inches =(m.getcenti()/2.54)+b.getinches();
 db.setvalues(feet,inches);
 return db;
}

int main()
{

  DB a,m;
  DM b,n;
  int choice;

  float meters,centimeters,feet,inches;

  cout<<"Enter meter and centimeter values :";
  cin>>meters>>centimeters;

  b.setmeters(meters);
  b.setcenti(centimeters);

  cout<<"Enter feet and inches values : ";
  cin>>feet>>inches;

  a.setfeet(feet);
  a.setinches(inches);

  while(1)
  {
   cout<<"\n1.meters centimeters\n2.feet inches\n 3 to exit\nEnter the units the result required in : ";
   cin>>choice;
   switch(choice)
   {
    case 1: n=add(b,a);
            cout<<"\nmeters :"<<n.getmeters()<<"\tcentimeters: "<<n.getcenti()<<endl;
            break;
    case 2: m=add(a,b);
            cout<<"\nfeet :"<<m.getfeet()<<"\tinches: "<<m.getinches()<<endl;
            break;
    case 3: exit(1);

    default:cout<<"Invalid choice";
   }
  }

return 0;
}
