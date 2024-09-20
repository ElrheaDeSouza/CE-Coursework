//Program to implement bubble sort in an array
#include<iostream>
using namespace std;
void bubblesort(int [],int);
void display(int [],int);

int main()
{
    int a[10],n,x;
    cout<<"Enter the size of the array\n";
    cin>>n;
    cout<<"\nEnter the elements in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nEntered elements are:\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    bubblesort(a,n);
    cout<<"\nSorted array is:\n";
    display(a,n);
    return 0;
}

void bubblesort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
}

void display(int a[],int n)
{
   int i;
   for(i=0;i<n;i++)
   {
        cout<<a[i]<<"\t";
   }
   cout<<endl;
}
