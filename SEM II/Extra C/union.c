#include<stdio.h>

union ustudent
{
    int age;
    float percentage;
}us;

struct sstudent
{
    int age;
    float percentage;
}ss;

void main()
{
    us.age=10;
    ss.age=12;
    us.percentage=76.32;
    ss.percentage=98.16;

    printf("\nage=%d",us.age);
    printf("\nage=%d",ss.age);
    printf("\npercentage=%f",us.percentage);
    printf("\npercentage=%f",ss.percentage);

printf("\nsizeof  union is %d",sizeof(us));
printf("\nsizeof struct is %d",sizeof(ss));

}
