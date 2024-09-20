
#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int rear=-1,front=-1,i,a[MAX];
void insert()
{
    int x;
        printf("\nEnter the element to be inserted:");
        scanf("%d",&x);
    if(rear==MAX-1)
    {
        printf("\nQueue overflow");
    }
    else if
            (front==-1&&rear==-1)
            front=0;
        rear=rear+1;
        a[rear]=x;
        printf("%d inserted ",x);


}
void delete()
{
    if (front==-1 || front>rear)
        printf("\nQueue underflow:");
    else{
        printf("%d deleted",a[front]);
        i=a[front];
        front=front+1;

    }
}
void peek()
{
     if (front==-1 || front>rear)
        printf("\nQueue underflow:");
        else
            printf("\nElement at the top=%d",a[front]);
}
void display()
{
     if (front==-1 || front>rear)
        printf("\nQueue underflow:");
        else{
            for(i=front;i<=rear;i++)
            {
                printf("%d",a[i]);
                printf("\n");
            }
        }
}
void underflow()
{
    if(front==-1||front>rear)
        printf("\nQueue underflow");
}
void overflow()
{
    if (rear==MAX-1)
        printf("\nQueue overflow");
}
int main()
{
    int c;
    printf("\n1.insert\n2.delete\n3.peek\n4.display\n5.underflow\n6.overflow\n7.exit");
    while(1)
    {
        printf("\nEnter your choice :");
        scanf("%d",&c);
        switch(c)
        {
            case 1:insert();
                   break;
            case 2:delete();
                   break;
            case 3:peek();
                   break;
            case 4:display();
                break;
            case 5:underflow();
                   break;
            case 6:overflow();
                   break;
            case 7:exit(1);
                   break;
            default:printf("\nINVALID CHOICE....");
        }
    }
    return 0;
}
