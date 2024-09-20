//program 9:to find whether an entered alphabet is a vowel or consonant
// Date:04/08/2023

#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<"\n Enter an alphabet:";
    cin>>n;
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
    cout<<"\n Entered alphabet  " << n<< " is a vowel";
    else
     cout<<"\n Entered alphabet  " << n<< " is not a vowel";
    return 0;
}
