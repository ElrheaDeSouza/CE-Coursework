//Write a program to implement binary search and bubble sort on an array
//program to implement Binary search on the array
#include<iostream>
using namespace std;

void bs(int [],int,int);

int main()
{
    int a[10],n,x;
    cout<<"Enter the size of the array\n";
    cin>>n;
    cout<<"\nEnter the elements in ascending order in an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nEnter the element to be searched in the array\n";
    cin>>x;

    bs(a,n,x);
    return 0;
}

void bs(int a[],int n,int x)
{
    int high=n-1,low=0,mid;
    while(low<=high)
    {
        mid=(low+high)/2;

        if(x==a[mid])
        {
            cout<<"\nElement\t"<<x<<" found at location "<<mid+1<<endl;
            break;
        }

        if(x>a[mid])
        {
            low=mid+1;
        }

        if(x<a[mid])
        {
            high=mid-1;
        }
    }

    if(low>high)
    {
        cout<<"\nElement "<<x<<" not found in the array\n";
    }
}
