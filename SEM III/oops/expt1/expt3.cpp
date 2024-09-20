//program 2:to find even or odd number
 //Date:04/08/2023

#include<iostream>
using namespace std;
int main()
{
    int x,n,i;
    cout<<"\n enter a number:";
    cin>>x;
    cout<<"\n enter the limit to find the multiples";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    if(i%x==0)
        cout<<"\n"<<i<< " is the multiple of "<< x;
    }
    return 0;
}

