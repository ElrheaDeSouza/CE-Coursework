//program 1:to find the min of three numbers


#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\n enter 3 numbers:";
    cin>>a>>b>>c;
    if((a<b)&&(a<c))
        cout<<"\n smallest number="<<a;
    else if((b<a)&&(b<a))
        cout<<"\n smallest number="<<b;
    else
        cout<<"\n smallest number="<<c;
        return 0;
}
/*
//program 2:to find even or odd number

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n enter a number:";
    cin>>n;
    if(n%2==0)
        cout<<"\n entered number is even ="<<n;
    else
        cout<<"\n entered number is odd ="<<n;
        return 0;
}
*/
