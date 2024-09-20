//Quick sort

#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int c=0;
int partition(int a[], int start, int end)
{
 int pivot, i, j, temp,k;
 i = start + 1;
 j = end;
 pivot = a[start];
 while(i<=j)
 {
 printf("Iteration %d\n",c);
 c=c+1;
 for(k=0;k<end+1;k++)
 {
 printf("%d\t",a[k]);
 }
 printf("\n");
 while(a[i]<pivot && (i<end))
 i++;
 while(a[j]>pivot)
 j--;
 if(i<j)
 {
 temp = a[i];
 a[i] = a[j];
 a[j] = temp;
 i++;
j--;
 }
 else
 {
 i++;
 }
 }
a[start] = a[j];
 a[j] = pivot;
 return j;
}
void quicksort(int arr[], int low, int high)
{
 int pivot;
 if(low > high)
 {
 return;
 }
 pivot = partition(arr, low, high);
 quicksort(arr, low, pivot - 1);
 quicksort(arr, pivot + 1, high);
}
void display(int a[], int start, int end)
{
 int i;
 printf("The array elements are: ");
 for(i=0; i<end; i++)
 {
 printf("%d ", a[i]);
 }
}
int main()
{
 int a[MAX], i, n,ch;
 printf("\nEnter 1 to continue\t 2 for exit");
 while(1)
 {
     printf("\n Enter your choice:");
     scanf("%d",&ch);
  switch(ch)
  {
 case 1:
         printf("Enter the size of the array: ");
         scanf("%d",&n);
         printf("Enter the elements: ");
         for(i=0; i<n; i++)
         {
         scanf("%d", &a[i]);
         }
         quicksort(a, 0, n-1);
         display(a, 0, n);
         break;

 case 2:exit(1);
        break;
 default:printf("Invalid choice");
         break;
  }
}
 return 0;

}
