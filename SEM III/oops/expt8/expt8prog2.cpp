//Write a program to:
//a) To concatenate two strings
//b) To find a substring
//c) To split a string
//d) To convert string to lowercase and vice versa


#include<iostream>
#include<string>
using namespace std;

string conc(string a,string b)
{
    return (a+b);
}

void substring(string sub,string str)
{
    string word;
    for(int i=0,k,j;i<str.length();i++)
    {
        for(k=i,j=0;j<sub.length();k++,j++)
        {
            word+=str[k];
        }
        if(word==sub)
        {
            cout<<"\nsubstring present from index "<<i+1<<" to "<<k;
            return;
        }
          word="";
    }
    cout<<"\nsubstring not present";
}

void split(int b,string a)
{
    if(b>a.length())
    {
        cout<<"\nspliting not possible";
        return;
    }
    int i;
    cout<<"\nfirst part of string :";
    for(i=0;i<b;i++)
        cout<<a[i];
    cout<<"\nsecond part of string: ";
    for(;i<a.length();i++)
        cout<<a[i];
}

string lowertoupper(string a)
{
    string word="";
    int n;
    for(int i=0;i<a.length();i++)
    {
        word+=a[i]-32;
    }
    return word;
}

string uppertolower(string a)
{
    string word="";
    int n;
    for(int i=0;i<a.length();i++)
    {
        word+=a[i]+32;
    }
    return word;
}

int main()
{
    string a,b;
    char c;
    int ch;


        cout<<"1.Concatenate"<<endl<<"2. Substring"<<endl<<"3. Split"<<endl<<"4. Lowercase to uppercase"<<endl<<"5. Uppercase to lowercase"<<endl<<"6. Exit"<<endl;
        while(1)
        {
        cout<<"\nEnter your choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
            cout<<"enter the two strings : ";
            cin>>a>>b;
            cout<<"\nconcatenating string: "<<conc(a,b);
            break;

            case 2:
            cout<<"Enter a string a: ";
            cin>>a;
            cout<<"Enter a substring of a: ";
            cin>>b;
            substring(b,a);
            break;

            case 3:
            cout<<"Enter a string a: ";
            cin>>a;
            cout<<"\nenter the index to split: ";
            int n;
            cin>>n;
            split(n,a);
            break;

            case 4:
            cout<<"\n\nenter a string in lower case:";
            cin>>a;
            cout<<"\nconeverting "<<a<<" to uppercase: "<<lowertoupper(a);
            break;

            case 5:
            cout<<"\n\nenter a string in upper case:";
            cin>>a;
            cout<<"\nconeverting "<<a<<" to lowercase: "<<uppertolower(a)<<endl;
            break;

            case 6:
            exit(1);

            default:
            cout<<"Inavlid Input"<<endl;
        }
        }

    return 0;
}
