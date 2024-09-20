//to accept and display a 2D array (matrix)
#include<stdio.h>
int main()
{
    int i,j,a[10][10],n,m;
    printf("\n enter the total no of rows and columns:");
    scanf("%d%d",&n,&m);
    //to accept the elements in the matrix
    printf("\n enter the elements:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    }
 for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d\t",a[i][j]);
            printf("\n");
    }
return 0;
}


