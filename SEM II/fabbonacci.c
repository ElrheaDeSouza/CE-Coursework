#include <stdio.h>

 int main()
 {
 int i=1, n,a=0,b=1,c;
 printf("Enter the range: ");
 scanf("%d",&n);
 printf("\nFibonnaci Series is: ");
 if(n==1)
   {
    printf("%d",a);
   }
 else if(n==2)
   {
    printf("%d",a);
    printf(" %d",b);
   }
else
  {
    printf(" %d",a);
    printf(" %d",b);
    for(i=1;i<=n-2;i++)
     {
     c=a+b;
     a=b;
     b=c;
      printf(" %d",a);
     }
  }
 return 0;
 }

