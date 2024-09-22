#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int patternMatch(string text,string pattern)
{
    int n=text.size();
    int m=pattern.size();
    bool found;

    for(int i=0;i<n-m+1;i++){
        int j=0;
    while(j<m && pattern[j]==text[i+j]){
        j++;
    }
    if(j==m)
        cout<<"\nPattern found at "<<i+1<<endl;
        found=true;

    }
    if(!found)
    cout<<"\nPattern not found";

    return 0;
}

int main()
{
    string text,pattern;
    cout<<"\nEnter any text: ";
    getline(cin,text);
    cout<<"\nEnter the pattern: ";
    getline(cin,pattern);
    int p=patternMatch(text,pattern);
    return 0;
}

