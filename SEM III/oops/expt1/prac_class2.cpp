#include<iostream>
using namespace std;
class date
{
  int day,month,year;
  public:
      int num,denom;
      void setday(int d);
      void setmonth(int m);
      void setyear(int y);
      int getday();
      int getmonth();
      int getyear();
      int display();

};
void date::setday(int d){day=d;}
void date::setmonth(int m){month=m;}
void date::setyear(int y){year=y;}

int date::getday(){return day;}
int date::getmonth(){return month;}
int date::getyear(){return year;}
int date::display(){cout<<getday()<<"/"<<getmonth()<<"/"<<getyear()<<""<<endl;}

int main()
{
    date d1,d2;
    d1.setday(17);
    d1.setmonth(8);
    d1.setyear(2023);
    d1.display();
    d2.setday(25);
    d2.setmonth(2);
    d2.setyear(1980);
    d2.display();
    return 0 ;

}
