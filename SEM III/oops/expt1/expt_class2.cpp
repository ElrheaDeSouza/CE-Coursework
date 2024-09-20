/*Write a program to implement a class called Phonebook. It should contain the contact name and
contact number and include member functions to initialize the data members (use setter and getter
functions). Use an array of object to display contact list.*/

//Date:17-08-2023
#include<iostream>
using namespace std;
class PhoneBook
{
    char contactName[30];
    char contactNo[20];
public:
    void getdata();
    void putdata();
};
void PhoneBook::getdata()
{
    cout<<"\n Enter the contact name:";
    cin>>contactName;
    cout<<"\n Enter contact number:";
    cin>>contactNo;
}
void PhoneBook::putdata()
{
    cout<<"\n Contact name:"<<""<<contactName;
     cout<<"\n Contact number:"<<""<<contactNo;
}
int  main()
{
    PhoneBook emp[30];
    int n,i;
    cout<<"\n Enter the total number of contacts:";
    cin>>n;
    for(i=0;i<n;i++)
        emp[i].getdata();
    cout<<"\n your contacts are:";
    for(i=0;i<n;i++)
        emp[i].putdata();

}
