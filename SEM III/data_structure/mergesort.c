/*program of sorting using merge sort through recursion*/
#include<stdio.h>
#define max 100
void merge_sort(int arr[],int low,int up);
void merge(int arr[],int temp[],int low1,int up1,int low2,int up2);
void copy(int arr[],int temp[],int low,int up);
int main()
{
  int i,n,arr[max];
  printf("\n Enter the total number of elements:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\n Enter element %d:",i+1);
    scanf("%d",&arr[i]);
  }
 merge_sort(arr,0,n-1);
 printf("\n Sorted list is: ");
  for(i=0;i<n;i++)
 printf("\t %d",arr[i]);
 }                                          //end of main()
void merge_sort(int arr[],int low,int up)
{
 int mid;
 int temp[max];
 if(low<up)                               //if more than one element
 {
  mid=(low+up)/2;
  merge_sort(arr,low,mid);               //sort arr[low:mid]
 merge_sort(arr,mid+1,up);              //sort arr[low:mid]
                                       //merge arr[low:mid] and arr[low:mid] to temp[low:up]
 merge(arr,temp,low,mid,mid+1,up);    //copy temp[low:up] to arr[low:up]

 copy(arr,temp,low,up);
 }
 }                                   //end of merge_sort
                                    //merges arr[low1:up1] and arr[low2:up2] to temp[low1:up2]
void merge(int arr[],int temp[],int low1,int up1,int low2,int up2)
{
  int i=low1,j=low2,k=low1;
  while((i<=up1)&&(j<=up2))
  {
   if (arr[i]<=arr[j])
   temp[k++]=arr[i++];
   else
   temp[k++]=arr[j++];

  }
while(i<=up1)
temp[k++]=arr[i++];
while(j<=up2)

temp[k++]=arr[j++];

}                                         //end of merge()
void copy(int arr[],int temp[],int low,int up)
{
 int i;
 for(i=low;i<=up;i++)
 arr[i]=temp[i];
}

