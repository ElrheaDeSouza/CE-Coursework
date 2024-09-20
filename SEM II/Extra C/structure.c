#include<stdio.h>
#include<string.h>
struct student
{

    int roll_no;
    char name[15];

};
 int main()
 {
     struct student stu[3];


     for(int i=0;i<3;i++)
     {

         printf("\nenter the roll no:");
         scanf("%d",&stu[i].roll_no);
         printf("\n enter the name");
          scanf("%s",&stu[i].name);

     }
    printf("displaying the details:");
     for(int i=0;i<3;i++)
     {
         printf("\n roll no:%d  \t name is:%s ",stu[i].roll_no,stu[i].name);
     }
     return 0;
 }
