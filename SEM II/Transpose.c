#include <stdio.h>
int main()
{
int i,j,k,a[20][20],b[20][20],r1,c1;

printf("Enter No. of rows and columns of A : ");
scanf("%d%d",&r1,&c1);


printf("Enter elements Matrix:");
{
for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
        scanf("%d",&a[i][j]);
        }
 }
 }

printf("Transpose of matrix\n");
{
for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
         b[i][j]=a[j][i];
         printf("%d ",b[i][j]);
}
    printf("\n");
    }
}

   return 0;
}
