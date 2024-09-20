
//Binary search
#include<stdio.h>
int main()
{
  int a[10],n,i,key,index;
  printf("enter the number of elements:");
  scanf("%d",&n);
  printf("enter the elements:");//to take the elements from the user
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  printf("enter the element to be searched:");//to accept the element to be searched from the user
  scanf("%d",&key);
  index=binarysearch(a,n,key);//to call binarysearch function
  if(index==-1)
  printf("element %d not found",key);
  else
  printf("element %d found at index %d",key,index);
  }
  int binarysearch(int a[],int n,int key)//to define the binarysearch function
  {
    int low=0,up=n-1,mid;//to intialize low,up,mid
    while(low<=up)
    {
      mid=(low+up)/2;//to find mid of array
      if(key>a[mid])
      low=mid+1;
      else if(key<a[mid])
      up=mid-1;
      else
      return mid;
    }
    return -1;
  }





