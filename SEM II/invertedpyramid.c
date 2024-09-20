#include<stdio.h>
int main()
{
int rows;

    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(int i=0; i<rows; i++)
    {
        for(int spaces=0;spaces<i;spaces++)
        {
            printf("  ");
        }
        for(int j=0;j<rows-i;j++)
        {
            printf("  * ");
        }
        printf("\n");
    }
    printf("\n");
return 0;
}


