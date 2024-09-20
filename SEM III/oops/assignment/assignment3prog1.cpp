
/*C++ program to create base class called STUDENT
(name, reg no, age) and using
inheritance create derived classes UG student and
PG student having field such as semester, fee
and stipend. Enter data of 5 students. Find average
age semester wise all UG and PG students
separately.*/
#include<iostream>
//#include <bits/stdc++.h>
using namespace std;
class Student
{
protected:
string name;
unsigned int age, reg_no;
static int student_count;
public:
virtual void avg_age()=0;
};

int Student::student_count = 0;
class UG_Student: protected Student
{
int sem, fees, stipend;
static int avg;
public:
void set_UG(string nam, int ag, int se){
name=nam, age=ag, sem=se,
reg_no=20231000;
}
void avg_age(){avg+=age;}
void
set_regNO(){reg_no=(++student_count)+reg_no;}
void avg_display(){cout<<avg/5;}
void calFEES(){
if(sem==1)
fees=30000, stipend=6000;
else if(sem==2)
fees=35000, stipend=6500;
else if(sem==3)
fees=40000, stipend=7000;
else if(sem==4)
fees=50000, stipend=8000;
else if(sem==5)
fees=57000, stipend=8500;
else if(sem==6)
fees=59000, stipend=8500;
else if(sem==7)
fees=60000, stipend=9000;
else if(sem==8)
fees=50000, stipend=9000;
}
};
int UG_Student::avg = 0;

class PG_Student: protected Student{
int sem, fees, stipend;
static int avg;
public:
void set_UG(string nam, int ag, int se){
name=nam, age=ag, sem=se,
reg_no=20235000;
}
void avg_age(){avg+=age;}
void
set_regNO(){reg_no=(++student_count)+reg_no;}
void avg_display(){cout<<avg/5;}
void calFEES(){
if(sem==1)
fees=40000, stipend=6000;
else if(sem==2)
fees=45000, stipend=6500;
else if(sem==3)
fees=50000, stipend=7000;
else if(sem==4)
fees=55000, stipend=7500;
}
};
int PG_Student::avg = 0;
int main(){
string name, deg;
int age, sem;
UG_Student ug[5];
PG_Student pg[5];
cout<<"ENTER UG STUDENTS INFO:\n";
for(int i=0;i<5;i++)
    {
cout<<"\nEnter name: ";
getline(cin,name);
cout<<"Enter age : ";
cin>>age;
do
{
cout<<"Enter SEM (1 to 8): ";
cin>>sem;
}while(sem>8);
ug[i].set_UG(name, age, sem);
ug[i].avg_age();
ug[i].set_regNO();
ug[i].calFEES();
cin.ignore();
}
system("cls");
cout<<"ENTER PG STUDENTS INFO\n";
for(int i=0;i<5;i++){
cout<<"\nEnter name: ";
getline(cin,name);
cout<<"Enter age : ";
cin>>age;
do{
cout<<"Enter SEM (1 to 4): ";
cin>>sem;
}while(sem>4);
pg[i].set_UG(name, age, sem);
pg[i].avg_age();
pg[i].set_regNO();
pg[i].calFEES();
cin.ignore();
}
cout<<"\nAverage age of UG students is : ";
ug[5].avg_display();
cout<<"\naverage age of PG students is : ";
pg[5].avg_display();
return 0;
}
