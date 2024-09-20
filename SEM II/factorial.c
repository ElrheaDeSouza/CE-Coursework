#include <stdio.h>

 int main()
 {
 int i=1, n,fact=1;
 printf("Enter a number");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
    {
     fact=fact*i;
    }
 printf("\nFactorial of %d is= %d",n,fact);
 return 0;
 }
