 /* Write a program to implement class ‘Date’ with data members(date,month,year).
    Include different constructors to initialize data members and also include members
    functions to display each date object in ‘dd-mm-yyyy’ format. */

#include<iostream>
using namespace std;
class date
{
  int day;
  int month;
  int year;
public:
  date()
  {
      day=11;
      month=09;
      year=2000;
  }
  date(int d,int m,int y);
  void putdata();
};
date::date(int d,int m,int y)
{
    cout<<"\n Enter the date in dd/mm/yyyy format:";
    cin>>d>>m>>y;
    cout<<"\n Entered date is:"<<d<<"/"<<m<<"/"<<y;
}
 /*void date::putdata()
{
    int d,m,y;
    cout<<"\n Entered date is:"<<d<<"/"<<m<<"/"<<y;
} */
int main()
{

    date d1();
  //  d1.putdata();
    date d2(10,11,2010);
  //  d2.putdata();
    return 0;
}


