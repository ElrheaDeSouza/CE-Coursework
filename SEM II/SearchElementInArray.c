//To search an element in an array
#include<stdio.h>
int main()
{
    int i,n,a[20],b,s=0;
    printf("\n enter the total elements in the array: ");
    scanf("%d",&n);
    printf("\n enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    // to search the element
    printf("\n enter the element to be searched:");
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {if(a[i]==b)
        {
            s=1;
            printf("\n\nelement=%d is found at position %d",b,i+1);
            break;
        }}
        if(s!=1)
      //  printf("element=%d is found at position %d",b,i+1);
 //   else
 printf("element=%d is not found ",b);
 return 0;
}

