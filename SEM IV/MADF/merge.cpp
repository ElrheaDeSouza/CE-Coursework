//MERGE SORT
#include<iostream>
using namespace std;

void merge(int a[],int low,int mid,int high)
{
    int i=low,j=mid+1,k=0;
    int c[high-low+1];//Temporary array
    while(i<=mid && j<=high )
    {
        if(a[i]<=a[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }else{
        c[k]=a[j];
        k++;
        j++;
        }
    }
    while(i<=mid)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        c[k]=a[j];
        k++;
        j++;
    }
    for(i=low;i<=high;i++)
    {
        a[i]=c[i-low];
    }
}

void mergeSort(int a[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
int main()
{
    int a[10],n;
    cout<<"\nEnter the total number of elements: ";
    cin>>n;
    cout<<"\nEnter the elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    mergeSort(a,0,n-1);
    cout<<"\nThe sorted elements are: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
