//to find the number of times an element occuring in an array
 #include<stdio.h>
  int main()
{
    int i,n,a[20],b,s=0,f=0;
    printf("\n enter the total elements in the array: ");
    scanf("%d",&n);
    printf("\n enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    // to search the element
    printf("\n enter the element to be searched:");
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
       if(b==a[i])
        {    s==1;
             f++;
            printf("\n element=%d is found at position %d",b,i+1);
        }
        }
           printf("\n element=%d is found %d times",b,f);
           if(s!=0)
          printf("element=%d is not found ",b);
 return 0;
}
