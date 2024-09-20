#include<stdio.h>
int main()
{
    int a[20],n,i,sum=0;
    printf("\n enter total elements in the array:");
    scanf("%d",&n);
    printf("\n enter the elements:");

    for(i=0;i<n;i++)
            scanf("%d",&a[i]);
         for(i=0;i<n;i++)
         {
        printf("%d  ",a[i]);
        sum=sum+a[i];
         }
         printf("\n the sum of the elements=%d",sum);
    return 0;
}

