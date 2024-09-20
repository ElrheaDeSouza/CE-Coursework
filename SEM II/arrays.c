//to accept and display an the elements in an array....
//1D arrays

#include<stdio.h>
int main()
{
    int a[20],n,i;
    printf("\n enter total elements in the array:");
    scanf("%d",&n);
    printf("\n enter the elements:");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
         for(i=0;i<n;i++)
        printf("%d  ",a[i]);
    return 0;
}




