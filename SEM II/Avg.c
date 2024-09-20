
#include<stdio.h>
int main()
{
    int a[70],n,sum=0;
float avg;
	printf("enter the total no.of elements you want to find the averaage of:");
    scanf("%d",&n);
    printf ("\n enter the elements:");
 for(int i=0;i<=n-1;i++)
  {
      scanf("%d",&a[i]);
	  sum=sum+a[i];
	  avg=(float)sum/n;
  }
      printf("the sum of the elements=%d",sum);
	 printf("\naverage=%f",avg);
 return 0;
}

