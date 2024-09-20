#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue()
{
    int x;
    printf("Enter an element: ");
    scanf("%d", &x);
    struct node *tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
    if(tmp==NULL)
    {
        printf("Dynamic memory allocation not possible\n");
    }
    else
    {
        tmp->data=x;
        tmp->link=front;
        if(front==NULL)
        {
            front=tmp;
        }
        else
        {
            rear->link=tmp;
        }
        rear=tmp;
        printf("Element %d inserted successfully\n",x);
    }
}
void dequeue()
{
    struct node *p;
    if(front==NULL)
    {
        printf("Queue Underflow\n");
    }
    else if(rear==front)
    {
        p =front;
        free(p);
        front=rear=NULL;
    }
    else
    {
        p=front;
        front=front->link;
        rear->link=front;
        printf("Element %d deleted successfully\n",p->data);
        free(p);
    }
}
void peek()
{
    if(front==NULL)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("The topmost element is %d\n", front->data);
    }
}
void display()
{
    struct node *p;
    if(front==NULL)
    {
        printf("Queue Empty\n");
    }
    else
        {
        p=front;
        printf("Queue:\n");
        do{
            printf("%d ", p->data);
            p=p->link;
          }
    while(p!=rear->link);
        printf("\n");
    }
}
int main()
{
 int a;
 printf("Enter\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
 while(1)
{
  printf("Enter choice: ");
  scanf("%d", &a);
  switch(a)
  {
    case 1:
        enqueue();
        break;
    case 2:
        dequeue();
        break;
    case 3:
        peek();
        break;
    case 4:
        display();
        break;
    case 5:
        exit(1);
    default:
        printf("Invalid Choice\n");
        break;
   }
  }
}
