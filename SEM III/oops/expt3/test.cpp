//Write a program to calculate the gross pay of regular and contract employees using method overloading.
#include<iostream>
using namespace std;

int pay(int days,int leave,float basic)
{
    cout<<"Enter the number of days of work in a month:";
    cin>>days;

    cout<<"Enter the number of days the employee took leave:";
    cin>>leave;

    cout<<"Enter the daily income of the regular employee:";
    cin>>basic;

    cout<<"The months income of the regular employee is"<<(days-leave)*basic<<endl;
    return 0;

}
int pay(float basic,int days)
{
    cout<<"Enter the number of days contract employee has worked:";
    cin>>days;

    cout<<"Enter the daily income of the contract employee:";
    cin>>basic;
    cout<<"the months income of the contract employee is"<<days*basic<<endl;

    return 0;
}
int main()
{
    int n;
    int days,leave;
    float basic;

    cout<<"1.Regular employee"<<endl<<"2.Contract employee"<<endl;
    cout<<"Enter your choice";
    cin>>n;
    switch(n)
    {
    case 1:
     pay(days,leave,basic);
     break;
    case 2:
     pay(days,basic);
     break;
    default:
     cout<<"Invalid choice";
    }
    return 0;
}
