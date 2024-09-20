//program 5:to find the average of array elements
//Date:04/08/2023

#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,sum=0;
    float avg;
    cout<<"\n enter the total number of elements:";
    cin>>n;
    cout<<"\n enter the elements:";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        sum=(float)sum+a[i];
    }
        avg=(float)sum/n;
    cout<<"\n the average ="<< avg;
    return 0;
}

//program 7:to find the min max and average of array elements

/*
#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,sum=0,l,g;
    float avg;
    cout<<"\n enter the total number of elements:";
    cin>>n;
    cout<<"\n enter the elements:";
    for(i=0;i<n;i++)
        cin>>a[i];
        l=g=a[0];
         for(i=0;i<n;i++)
         {
            if (a[i]<l)
            l=a[i];
         if (a[i]>g)
            g=a[i];
         }
    for(i=0;i<n;i++)
    {
        sum=(float)sum+a[i];
    }
        avg=(float)sum/n;
        cout<<"minimum="<< l<<endl;
        cout<<"maximum="<< g;
        cout<<"\n the average ="<< avg;
    return 0;
}
*/
/*
//program 8:to find the median of an array of numbers

#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,med;
    float avg;
    cout<<"\n enter the total number of elements:";
    cin>>n;
    cout<<"\n enter the elements:";
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    med=n/2;
    cout<<"\n the median of the array="<<med;
     cout<<"\n the element of the array="<<a[i];



    return 0;
}
*/





