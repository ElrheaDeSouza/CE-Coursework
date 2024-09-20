
/*#include<stdio.h>
int main()
{
    int a[20],key,n,f,i;
    printf("\n enter the size of the array:");
    scanf("%d",&n);
    printf("\n enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d ",&a[i]);
     printf("\n enter the element to be searched:");
      scanf("%d",&key);
    f=linscr(a,n,key);
    if(f== -1)
        printf("\n element %d not found");
    else
        printf("\n element %d found at position %d",key,f);
}
 int linscr(int a[],int n,int key)
{
    int i=0;
    while((i<n )&& (a[i]!=key))
    i++;
    if (i<n)
        return i;
    else
        return -1;
}
*/



//Linear search
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
  printf("enter the element to be searched:");//to take the element to be searched from the user
  scanf("%d",&key);
  index=linearsearch(a,n,key);                //calling the linear search function
  if(index==-1)
  printf("element %d not found",key);
  else
  printf("element %d found at index %d",key,index);
  }
  int linearsearch(int a[],int n,int key)    //defining  the linear search function
  {
   int i=0;
   while(i<n && a[i]!=key)
   i++;
   if(i<n)
   return i;
   else
   return -1;
  }
















