//Write a program to count the no of new line,tab and whitespace characters in a string
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string:"<<endl;
    //cin.ignore();
    getline(cin,str);
    int newline,tab,space,length;
    newline=tab=space=0;
    length=str.length();
    for(int i=1;i<=length;i++)
    {    if(str[i]==' ')
            space++;
        if(str[i]=='\n')
            newline++;
        if(str[i]=='\t')
            tab++;
    }
    cout<<"\nnew line character: "<<newline<<"\ntab: "<<tab<<"\nspace: "<<space;
}
