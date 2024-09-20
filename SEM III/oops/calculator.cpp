#include<iostream>
#include "calculator.h"
using namespace calculator;
using namespace std;
int main()
{
    float a,b;
     cout<<"\n enter two numbers:";
     cin>>a>>b;
     cout<<"\n sum="<<add(a,b);
     cout<<"\n diff="<<subract(a,b);
     cout<<"\n product="<<mul(a,b);
     cout<<"\n div="<< div( a, b);
    return 0;

}



