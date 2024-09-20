
#include<stdio.h>
void merge(int Arr[],int start, int mid, int end)
{
int temp[end - start + 1];
int i = start, j = mid+1, k = 0;


	while(i <= mid && j <= end)
    {
		if(Arr[i] <= Arr[j])
        {
			temp[k] = Arr[i];
			k += 1;
            i += 1;
		}

        else
        {
            temp[k] = Arr[j];
            k += 1;
            j += 1;
        }
    }


	while(i <= mid)
    {
		temp[k] = Arr[i];
		k += 1;
        i += 1;
	}

	while(j <= end)
    {
		temp[k] = Arr[j];
		k += 1;
        j += 1;
	}


	for(i = start; i <= end; i += 1)
    {
		Arr[i] = temp[i - start];
	}
}

void mergeSort(int Arr[],int start,int end)
{
    if(start < end)
    {
		int mid = (start + end) / 2;
		mergeSort(Arr, start, mid);
		mergeSort(Arr, mid+1, end);
		merge(Arr, start, mid, end);
	}
}

int main()
{
    int low,high,Arr[50],n,i;


    printf("enter the size of the array:");
    scanf("%d",&n);

    printf("enter the elements in the array:");
    for(i=0;i<n;i++)
    scanf("%d",&Arr[i]);

    low=0;
    high=n-1;
    mergeSort(Arr,low,high);

    printf("array elements:");
    for(i=0;i<n;i++)
    printf("\t%d",Arr[i]);

return 0;
}
