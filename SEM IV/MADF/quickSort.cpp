#include <iostream>
using namespace std;

int partition(int a[], int lb, int ub)
{
    int pivot = a[lb];
    int start = lb, end = ub;
    while (start < end)
    {
        while (a[start] <= pivot && start < end)
            start++;

        while (a[end] > pivot)
            end--;
        if (start < end)
            swap(a[start], a[end]);
    }
    swap(a[lb], a[end]);
    return end;
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int q = partition(a, low, high);
        quickSort(a, low, q - 1);
        quickSort(a, q + 1, high);
    }
}

int main()
{
    int a[10], n;
    cout << "\nEnter the total number of elements: ";
    cin >> n;
    cout << "\nEnter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    quickSort(a, 0, n - 1);
    cout << "\nThe sorted array is: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
///OR

/*
#include<iostream>
using namespace std;

// Function to swap two elements
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to partition the array and return the pivot index
int partition(int Arr[], int LB, int UB) {
    int pivot = Arr[LB]; // Choosing the first element as the pivot
    int start = LB;
    int end = UB;

    while (start < end) {
        while (Arr[start] <= pivot && start < end) {
            start++;
        }

        while (Arr[end] > pivot) {
            end--;
        }

        if (start < end) {
            swap(Arr[start], Arr[end]);
        }
    }

    swap(Arr[LB], Arr[end]);
    return end;
}

// Function to perform Quick Sort
void quickSort(int Arr[], int LB, int UB) {
    if (LB < UB) {
        int loc = partition(Arr, LB, UB);
        quickSort(Arr, LB, loc - 1);
        quickSort(Arr, loc + 1, UB);
    }
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int Arr[n];

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }

    quickSort(Arr, 0, n - 1);

    cout << "Sorted array is :";
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}
*/
//OR
/*

#include<iostream>
using namespace std;

int Partition(int a[],int lb,int ub)
{
    int  pivot=a[lb];
    int start=lb;
    int  end=ub;
    while(start<end)
    {
        while(a[start]<=pivot && start<end)
        start++;

        while(a[end]>pivot)
        end--;
        if(start<end)
        swap(a[start],a[end]);
    }
    swap(a[lb],a[end]);
    return end;
}

void quickSort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int location=Partition(a,lb,ub);
        quickSort(a,lb,location-1);
        quickSort(a,location+1,ub);
    }
}

int main()
{
    int n;
    cout<<"\nEnter the total number of elements:";
    cin>>n;
    int a[n];
    cout<<"\nEnter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nAfter sorting:";
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
*/



