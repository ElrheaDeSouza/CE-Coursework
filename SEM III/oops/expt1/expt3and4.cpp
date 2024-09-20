//program 3:to find n multiples of an entered number
// Date:04/08/2023
/*
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
*/
//program 4:to find quotient and remainder of a number


#include<iostream>
using namespace std;
int main()
{
    int n,x,r,q;
    cout<<"\n enter a divident:";
    cin>>n;
    cout<<"\n enter the divisor:";
    cin>>x;
    q=n/x;
    r=n%x;
    cout<<"\n the quotient= "<< q;
    cout<<"\n the remainder="<< r;
    return 0;
}

