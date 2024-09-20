//program 12:to find area of triangle,circle,square and rectangle
// Date:04/08/2023
/*
#include<iostream>
using namespace std;
int main()
{
    int c;
    float h,b,area,r,s,l,w ;
    cout<<"\n Enter 1 for triangle 2 for circle 3 for square 4 for rectangle:";
    cout<<"\n Enter a number of your choice:";
    cin>>c;
    switch(c)
    {
        case 1:cout<<"\nEnter the base and height:";
               cin>>h>>b;
               area=(b*h)/2.0;
               cout<<"\nThe area of triangle="<< area;
               break;

       case 2:cout<<"\nEnter the radius:";
               cin>>r;
               area=3.14*r*r;
               cout<<"\nThe area of circle="<< area;
               break;

       case 3:cout<<"\nEnter the side of the square:";
               cin>>s;
               area=s*s;
               cout<<"\nThe area of square="<< area;
               break;

        case 4:cout<<"\nEnter the length and width:";
               cin>>l>>w;
               area=l*w;
               cout<<"\nThe area of rectangle="<< area;
               break;

        default:cout<<"\n Invalid case number";
            }

    return 0;
}
*/
/*
//program 12:to find area of triangle,circle,square and rectangle


#include<iostream>
using namespace std;
int main()
{
    int c;
    float h,b,r,s,l,w,area;
    cout<<"\n Enter 1 to calculate area of triangle\n 2 for area of circle\n 3 for area of square \n 4 for area of rectangle:";
    cout<<"\n Enter a number of your choice:";
    cin>>c;
    switch(c)
    {
        case 1:cout<<"\nEnter the base and height:";
               cin>>h>>b;
               area=(b*h)/2.0;
               cout<<"\nThe area of triangle="<< area;
               break;

       case 2:cout<<"\nEnter the radius:";
               cin>>r;
               area=3.14*r*r;
               cout<<"\nThe area of circle="<< area;
               break;

       case 3:cout<<"\nEnter the side of the square:";
               cin>>s;
               area=s*s;
               cout<<"\nThe area of square="<< area;
               break;

        case 4:cout<<"\nEnter the length and width:";
               cin>>l>>w;
               area=l*w;
               cout<<"\nThe area of rectangle="<< area;
               break;

        default:cout<<"\n Invalid case number";
            }

    return 0;
}
*/
//program 11:Menu driven program to determine if a given character
// is lowercase alphabet or uppercase alphabet or any other number


#include<iostream>
using namespace std;
int main()
    {
        int x;
      char ch,c;


      do
      {
      cout<<"Enter the character:";
      cin>>ch;

      if(ch>=65&&ch<=90)
        x=1;

        else if (ch>=97&&ch<=122)
            x=2;

        else
           x=3;
      switch(x)
      {
        case 1: cout<<"Upper case\n";
                        break;

        case 2: cout<<"Lower case\n";
                        break;

        default:cout<<"Other number\n";
      }

      cout<<"Enter y or Y to continue\n";
      cin>>c;
      }
      while
         ((c=='y')||(c=='Y'));
      return 0;
      }
