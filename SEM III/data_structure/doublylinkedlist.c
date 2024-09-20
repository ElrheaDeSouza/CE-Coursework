//Write a C Program to implement Doubly Linked List
#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *prev;
  struct node *next;
};
 struct node *start=NULL;

 void inst_beg()
 {
     int x;
     printf("Enter value to be inserted :");
     scanf("%d",&x);

     struct node *tmp;
     tmp=(struct node *)malloc(sizeof (struct node));
     if (start==NULL){
        tmp->data=x;
        tmp->prev=NULL;
        tmp->next=NULL;
        start=tmp;
        printf("%d Inserted",x);
     }
     else{
        tmp->data=x;
     tmp->prev=NULL;
     tmp->next=start;
     start->prev=tmp;
     start=tmp;
     printf("%d Inserted",x);
    }
 }

  void inst_end()
 {
     struct node *p;
     int x;
     printf("Enter element to be inserted :");
     scanf("%d",&x);
     struct node *tmp;
     tmp=(struct node *)malloc(sizeof (struct node));

     if (start==NULL){
        tmp->data=x;
        tmp->prev=NULL;
        tmp->next=NULL;
        start=tmp;
        printf("%d Inserted",x);
     }

     else{
      p=start;
      while(p->next!=NULL){
        p=p->next;
      }
      tmp->data=x;
      tmp->next=NULL;
      tmp->prev=p;
      p->next=tmp;
      printf("%d Inserted",x);
     }
 }

 void inst_pos()
 {
    struct node *p, *tmp;
    int i,x,pos;
    printf("Enter element you want to insert :");
    scanf("%d", &x);
    printf("Enter Position :");
    scanf("%d",&pos);
    tmp=(struct node *)malloc(sizeof (struct node));
    tmp->data=x;
    if (pos==1)
    {
        tmp->prev=NULL;
        tmp->next=start;
        start->prev=tmp;
        start=tmp;
        printf("%d Inserted at %d",x,pos);
        return;
    }
    p=start;
    for (i=1; i<pos-1; p!=NULL,i++)
    {
        p=p->next;
    }
    if (p==NULL)
    {
        printf("Less than %d", pos);
    }
    else{
        tmp->next=p->next;
        tmp->prev=p;
        if (p->next!=NULL){
            p->next->prev=tmp;
        }
        p->next=tmp;
        printf("%d Inserted at %d\n",x,pos);
    }
    return;
 }

 void insert_bfe_node()
 {
     struct node *p,*tmp;
     int x,item;
    printf("Enter element you want to insert :");
    scanf("%d", &x);
    printf("Enter element before which you want to insert :");
    scanf("%d",&item);

    if (start==NULL)
    {
        printf("Empty");
        return;
    }

    if (start->data==item)
        {

        tmp=(struct node *)malloc(sizeof (struct node));
        tmp->data=x;
        tmp->next=start;
        tmp->prev=NULL;
        start->prev=tmp;
        start=tmp;
        printf("%d inserted before %d",x,item);
        return;
    }
    p=start;
    while(p->next!=NULL){
        if (p->next->data==item)
        {
           tmp=(struct node *)malloc(sizeof (struct node));
           tmp->data=x;
           tmp->next=p->next;
            tmp->prev=p;
           if(p->next!=NULL)
            p->next->prev=tmp;
           p->next=tmp;
           printf("%d inserted before %d",x,item);
           return;
        }
        p=p->next;
    }
    printf("Invalid element");
 }

 void insert_aftr_node()
 {
   struct node *p, *tmp;
    int item,x;
    printf("Enter element you want to insert :");
    scanf("%d", &x);
    printf("Enter element after which you want to insert :");
    scanf("%d",&item);
    tmp=(struct node *)malloc(sizeof (struct node));

     if(start->data==item){
        tmp->data=x;
        tmp->next=start->next;
        if(start->next!=NULL)
            start->next->prev = tmp;
        tmp->prev=start;
        start->next=tmp;
        return;
    }

    p=start;
    while (p!=NULL)
    {
        if (p->data==item)
        {
            tmp->data=x;
            tmp->next=p->next;
            if (p->next!=NULL){
                p->next->prev=tmp;
            }
            tmp->prev=p;
            p->next=tmp;
            printf("%d Inserted after %d", x,item);
            return;
        }
        p=p->next;
    }
    printf("%d Not present",item);
 }

 void del_beg()
 {
     struct node *p;
   if (start==NULL){
    printf("List is Empty");
    return;
   }
   else if (start->next==NULL){
       p=start;
       printf("%d Deleted\n",start->data);
       start=NULL;
       free(p);
       return;
   }
   else {
    printf("%d Deleted",start->data);
    p=start;
    p->next->prev=NULL;
    start=p->next;
    free(p);
    return;
   }
 }

 void del_end(){
     struct node *p;
     if (start==NULL)
     {
         printf("List is empty");
         return;
     }
      else if (start->next==NULL){
        p=start;
        printf("%d Deleted",p->data);
        start=NULL;
        free(p);
        return;
      }
      else{
        p=start;
        while (p->next->next!=NULL){
            p=p->next;
        }
        printf("%d Deleted",p->next->data);
        free(p->next);
        p->next=NULL;
        return;
      }
 }

 void del_in_between(){

  struct node *p,*tmp;
     int x;
    printf("Enter element you want to delete :");
    scanf("%d", &x);

    if (start==NULL){
        printf("Empty");
        return;
    }

    if (start->data==x){
        tmp=start;
        start=start->next;
        free(tmp);
        printf("%d Deleted",x);
        return;
    }
    p=start;
    while(p->next!=NULL)
    {
        if (p->next->data==x)
        {
            tmp=p->next;
            p->next=tmp->next;
              if (p->next!=NULL)
              {
                tmp->next->prev=p;
              }
              free(tmp);
              printf("%d Deleted",x);
              return;
        }
        p=p->next;
    }
    printf("%d is not found",x);
    return;
 }

 void del_pos()
 {
    struct node *p,*temp;
    int pos,i;

    if(start==NULL){
        printf("empty");
        return;
    }

    printf("Enter position to be deleted :");
    scanf("%d",&pos);

    if(pos==1)
        {
        temp=start;
        if(start->next!=NULL)
            start->next->prev=NULL;
        start=start->next;
        printf("Element %d deleted\n",temp->data);
        free(temp);
            return;
    }
        p=start;
        for(i=1; i<pos && p!=NULL;i++)
            p=p->next;

        if(p==NULL){
            printf("position %d not present in the list\n",pos);
            return;
        }
            temp=p;
            p->prev->next=p->next;
            if(p->next!=NULL)
                p->next->prev=p->prev;
            printf("Element %d deleted\n",temp->data);
            free(temp);
}

 void count()
 {
     struct node *p;
     int count=0;
     p=start;
     while(p!=NULL){
        p=p->next;
        count++;
     }
     printf("%d elements present",count);
 }

 void search()
 {
struct node *p=start;
int item,pos=1;
printf("Enter the element to be searched:");
scanf("%d",&item);
while(p!=NULL)
{
if (p->data==item)
{
printf("Item %d is found at position %d\n",item,pos);
return;
}
p=p->next;
pos++;
}
printf("Item %d is not in the list\n",item);
}

 void reverse(){
struct node *p1,*p2;
p1=start;
p2=p1->next;
p1->next =NULL;
p1->prev=p2;
while(p2!=NULL)
{
p2->prev=p2->next;
p2->next=p1;
p1=p2;
p2=p2->prev;
}
start=p1;
 printf(" The List Reversed\n");
return;
}

 void display()
 {
     struct node *p;
     if (start==NULL)
     {
         printf("Empty List");
     }
     else {
        p=start;
        while (p!=NULL){
            printf("%d\t", p->data);
            p=p->next;
        }
     }
 }

 int main()
{
   int choice;
printf(" 1:Insert at Beginning of List\n 2:Insert at End of List\n 3:Insert at given position\n 4:Insert before node\n 5:Insert after node\n 6:Delete 1st Element of List\n 7:Delete last Element of List\n 8:Delete in between the list\n 9:Delete at any position in the list\n 10:Count elements\n 11:Search Element\n 12: Reverse list\n 13:Display List\n 14:Exit");
while(1)
  {
    printf("\n Enter choice :");
    scanf("%d",&choice);
    switch(choice)
      {
        case 1:inst_beg();
                break;
        case 2:inst_end();
                break;
            case 3:inst_pos();
                break;
            case 4:insert_bfe_node();
                    break;
        case 5:insert_aftr_node();
                break;
        case 6:del_beg();
                break;
        case 7:del_end();
                break;
            case 8:del_in_between();
                break;
            case 9:del_pos();
                break;
            case 10:count();
                break;
            case 11:search();
                break;
            case 12:reverse();
                break;
            case 13:display();
                break;
        case 14:exit(0);
                break;
        default:printf("Invalid Choice \n");
      }
  }
return 0;
}
