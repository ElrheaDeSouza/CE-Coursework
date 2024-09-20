/* Write a C++ program to read 10 numbers from users. Insert the even numbers into even. txt and
odd numbers into odd.txt respective files. Use file error handling functions wherever required. */

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
string ord(int a)
{
    string cha;
    if(a==1)
    cha="st";
    else if(a==2)
    cha="nd";
    else if(a==3)
    cha="rd";
    else
    cha="th";
    return cha;
}
int main()
{
ofstream even("even.txt");
if(!even)
    {
    cerr << "Error while opening file even.txt";
    return 0;
    }
ofstream odd("odd.txt");
if(!odd)
    {
    cerr << "Error while opening file odd.txt";
    return 0;
    }
int n[10];
for(int i=1;i<11;i++){
cout<<"Enter "<<i<<ord(i)<<" number :";
cin>>n[i];
if(n[i]%2==0)
even<<n[i]<<" ";
else
odd<<n[i]<<" ";
}
even.close();
odd.close();
return 0;
}
