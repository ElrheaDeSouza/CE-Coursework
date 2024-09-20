//implementation of queue using linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *front=NULL,*rear=NULL;

void insert()
{
    int x;
    printf("enter the element to be inserted:");
    scanf("%d",&x);
    struct node *tmp;
    tmp=(struct node*)malloc(sizeof(struct node));

    if (tmp==NULL)
        printf("Queue overflow");
    else
    {
        tmp->data=x;
        tmp->link=NULL;
        if (front==NULL)
        {
         front=tmp;
        }
        else{
        rear->link=tmp;
        }
        rear=tmp;
        printf("\n Element inserted is %d",x);
    }
}

void del()
{
    struct node *p;
    if (front==NULL)
        printf("Queue overflow\n");
    else
    {
        printf("\n element %d is deleted\n",front->data);
        p=front;
        front=front->link;
        free(p);
    }
}

void underflow()
{
    if (front==NULL)
        printf(" queue underflow\n");
    else
        printf("\n no queue underflow");
        }

void peek()
{
    if (front==NULL)
        printf("queue underflow\n");
    else
        printf("\n Element at the front is %d",front->data);
}

void display()
{
    struct node *p;

    if(front==NULL)
    {
        printf("underflow\n");
        return;
    }
    p=front;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->link;
    }

}

int main()
{
    int choice;
    printf("1: Insert\n2: Delete\n3: underflow\n4: peak\n5: display\n6: exit");
    while(1)
    {
        printf("\nenter choice :");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:insert();
                    break;
            case 2:del();
                    break;
            case 3:underflow();
                    break;
            case 4:peek();
                    break;
            case 5:display();
                    break;
            case 6:exit(0);
                    break;
            default:printf("invalid choice\n");
        }
    }
    return 0;
}

