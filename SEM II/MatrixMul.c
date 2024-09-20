#include<stdio.h>
void main()
{
int i,j,k,rows1,cols1,rows2,cols2,a[10][10],b[10][10],c[10][10];
printf("Enter the rows of matrix a:");
scanf("%d",&rows1);
printf("Enter the columns of matrix a:");
scanf("%d",&cols1);
printf("Enter the rows of matrix b:");
scanf("%d",&rows2);
printf("Enter the columns of matrix b:");
scanf("%d",&cols2);
if (cols1==rows2)
{
printf("Enter the elements of matrix a:");
for(i=0;i<rows1;i++)
{
  for(j=0;j<cols1;j++)
  {
    scanf("%d",&a[i][j]);
  }
}

printf("Enter the elements of matrix b:");
for(i=0;i<rows2;i++)
{
  for(j=0;j<cols2;j++)
  {
    scanf("%d",&b[i][j]);
  }
}

for(i=0;i<rows1;i++)
{
for(j=0;j<cols2;j++)
{
c[i][j]=0;
for(k=0;k<cols1;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}

printf("Product of matrices is:\n");
for(i=0;i<rows1;i++)
{
for(j=0;j<cols2;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}
}

else
{
printf("Matrix multiplication not possible");
}
}

