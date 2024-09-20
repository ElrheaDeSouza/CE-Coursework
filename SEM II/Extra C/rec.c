
#include<stdio.h>

void square(int*,int*sq);
void main()
{ int n,sq;
    printf("\n enter a no");
    scanf("%d",&n);
    square(&n,&sq);
    printf("\n square=%d",sq);

}
void square(int*n,int*sq)
{

//int s;


    sq= (*n) * (*n);
    printf("\n sq=%d",sq);

}
