//Program 6 to display percentage and grade of student using namespace defined in an external
//header file(should contain percentage and grade function) Date:01/08/2023

#include<iostream>
#include "prog.h"

using namespace std;
using namespace prog;
    int main()
        {
         int a[10],i,n,sum=0,t;
    cout<<"\n Enter the total number of subjects:";
    cin>>n;
    cout<<"\n Enter the marks of each subject:";
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        sum=(float)sum+a[i];
        t=n*100;
    cout<<"\n percentage="<< per(sum,t );
    cout<<"\n grade="<<grd(sum);
	return 0;
}
