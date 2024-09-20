#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *start=NULL;

void addAtBeg(){
    struct node *p,*temp;
    int element;

    printf("Enter element to be inserted :");
    scanf("%d",&element);

    temp=(struct node *)malloc(sizeof(struct node));

    if(start==NULL){
        temp->link=NULL;
        temp->data=element;
        start=temp;
        return;
    }
    else{
        temp->data=element;
        temp->link=start;
        start=temp;
        return;
    }
}

void addAtEnd(){
    struct node *p,*temp;
    int element;

    printf("Enter element to be inserted :");
    scanf("%d",&element);

    temp=(struct node *)malloc(sizeof(struct node));

    if(start==NULL){
        temp->link=NULL;
        temp->data=element;
        start=temp;
        return;
    }
    else{
        p=start;
        while(p->link!=NULL)
            p=p->link;

        temp->data=element;
        temp->link=NULL;
        p->link=temp;
        return;
    }
}

void addAftNode(){
    struct node *p,*temp;
    int element,item;

    if(start==NULL){
    printf("List is empty");
    return;
    }

    printf("Enter element to be inserted :");
    scanf("%d",&element);

    printf("Enter element after which to be inserted :");
    scanf("%d",&item);

    temp=(struct node *)malloc(sizeof(struct node));

    if(start->data==item){
        temp->link=start->link;
        temp->data=element;
        start->link=temp;
        return;
    }
    else{
        p=start;
        while(p!=NULL){
            if(p->data==item){
                temp->data=element;
                temp->link=p->link;
                p->link=temp;
                return;
            }
            p=p->link;
        }
    }
        printf("element not found");
        return;
}

void addBfrNode(){
    struct node *p,*temp;
    int element,item;

    if(start==NULL){
    printf("List is empty");
    return;
    }

    printf("Enter element to be inserted :");
    scanf("%d",&element);

    printf("Enter element before which to be inserted :");
    scanf("%d",&item);

    temp=(struct node *)malloc(sizeof(struct node));

    if(start->data==item){
        temp->link=start;
        temp->data=element;
        start=temp;
        return;
    }
    else{
        p=start;
        while(p->link!=NULL){
            if(p->link->data==item){
                temp->data=element;
                temp->link=p->link;
                p->link=temp;
                return;
            }
            p=p->link;
        }
    }
        printf("element not found");
        return;
}

void addAtPos(){
    struct node *p,*temp;
    int element,pos,i;

    printf("Enter element to be inserted :");
    scanf("%d",&element);

    printf("Enter position to be inserted at:");
    scanf("%d",&pos);

    temp=(struct node *)malloc(sizeof(struct node));

    if(pos==1){
            temp->link=start;
            temp->data=element;
            start=temp;
            return;
    }
    else{
        p=start;
        for(i=1; i<pos-1 && p!=NULL;i++)
            p=p->link;

        if(p==NULL){
            printf("less than %d elements present",pos);
            return;
            }

        else{
            temp->link=p->link;
            temp->data=element;
            p->link=temp;
        }
        return;
    }
}

void delBeg(){
    struct node *p,*temp;
    int element;

    if(start==NULL){
        printf("List is empty");
        return;
    }

    temp=(struct node *)malloc(sizeof(struct node));

    temp=start;
    start=start->link;
    printf("Element %d deleted",temp->data);
    free(temp);
    return;
    }

void delEnd(){
    struct node *p,*temp;
    int element;

    if(start==NULL){
        printf("List is empty");
        return;
    }

    if(start->link==NULL){
        printf("Element %d deleted",start->data);
        start=NULL;
        return;
    }

    temp=(struct node *)malloc(sizeof(struct node));

    p=start;
    while(p->link->link!=NULL)
        p=p->link;

    temp=p->link;
    p->link=NULL;
    printf("Element %d deleted",temp->data);
    free(temp);
    return;
}

void del_element(){
    struct node *p,*temp;
    int element;

    if(start==NULL){
        printf("List is empty");
        return;
    }

    printf("Enter element to be deleted");
    scanf("%d",&element);

    temp=(struct node *)malloc(sizeof(struct node));

    if(start->data==element){
        temp=start;
        start=start->link;
        free(temp);
        return;
    }

    p=start;
    while(p->link->data!=element)
        p=p->link;

    temp=p->link;
    p->link=temp->link;
    printf("Element %d deleted",temp->data);
    free(temp);
    return;
}

void display(){
    struct node *p;

    p=start;
    if(p==NULL){
        printf("List is empty");
        return;
    }

    while(p!=NULL){
        printf("%d ",p->data);
        p=p->link;
    }
}

void count(){
    struct node *p;
    int count=0;
    p=start;
    while(p!=NULL){
        p=p->link;
        count++;
    }
    printf("count = %d ",count);
}

void search(){
    struct node *p;
    int element,pos=1;

    printf("Enter element to be searched:");
    scanf("%d",&element);
    if(start->data==element){
        printf("element %d found at position %d",element,pos);
        return;
    }

    p=start;
    while(p!=NULL){
        if(p->data==element){
            printf("element %d found at position %d",element,pos);
            return;
        }
        p=p->link;
        pos++;
    }
    printf("element not found");
}

void reversal(){

        if(start==NULL){
            printf("List is empty");
            return;
        }

        struct node *ptr, *prev, *next;
        prev=NULL;
        ptr=start;

        while(ptr!=NULL){
            next=ptr->link;
            ptr->link=prev;
            prev=ptr;
            ptr=next;
        }

        start=prev;
        printf("reversal complete.");
}

int main(){

    int choice;

    printf("1.add at beginning\n2.add at end\n3.add after node\n4.add bfr node\n5.add at position\n6.delete first element\n7.delete last element\n8.delete element\n9.display\n10.count\n11.search\n12.reversal\n0.exit");

    while(1){
        printf("\nenter choice :");
        scanf("%d",&choice);

        switch(choice){
        case 0:exit(0);
                break;
        case 1:addAtBeg();
                break;
        case 2:addAtEnd();
                break;
        case 3:addAftNode();
                break;
        case 4:addBfrNode();
                break;
        case 5:addAtPos();
                break;
        case 6:delBeg();
                break;
        case 7:delEnd();
                break;
        case 8:del_element();
                break;
        case 9:display();
                break;
        case 10:count();
                break;
        case 11:search();
                break;
        case 12:reversal();
                break;
        default:printf("invalid choice\n");
        }
    }
    return 0;
}
