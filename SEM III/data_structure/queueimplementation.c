#include<stdio.h>
#define MAX 5
int front = -1, rear = -1, a[MAX], i;
void insertion(int i){//function for push operation
    if(rear == MAX -1){
    printf("queue overflow\n\n");
    }
    else if(front==-1){
    front =0;
    }
    rear++;
    a[rear] = i;
    }

int deletion(){ //function to pop elements from the stack
    if(front == -1 ||front>rear){
    printf("Stack underflow\n\n");
    }
    else{
    i = a[front];
    front++;
    printf("Element deleted successfully\n\n");
    return front;
    }
}
void overflow(){ //function to check overflow condition
    if(rear == MAX -1){
    printf("stack overflow\n\n");
    }
    else{
    printf("no stack overflow\n\n");
    }
}
void underflow(){ //function to check underflow condition
    if(front == -1 ||front>rear){
    printf("stack underflow\n\n");
    }
    else{
    printf("no stack underflow\n\n");
    }
}
void peek(){ //function to return top most element
     if(front == -1 ||front>rear){
    printf("stack underflow\n\n");
    }
    else{
    printf("front element is %d\n",a[front]);
    }
}
void display(){ //function to display queue
int i;
if(front == -1 ||front>rear){
    printf("stack underflow\n\n");
    }
    else{
        for(i=front ; i<=rear; i++){
        printf("%d ", a[i]);
        printf("\n\n");
        }
    }
}

int main(){
    int c;
    while(1){
    printf("\n\n1.insertion\n2.deletion\n3.check stack overflow condition\n4.check stack underflow condition\n5.peek\n6.display\n7.exit\nChoose operation to perform: ");
    scanf("%d", &c);
    switch(c){ //menu driven structure to use stack
    case 1:
            printf("Enter element to insert: ");
            scanf("%d", &i);
            insertion(i);

            break;
    case 2:
            deletion();

            break;
    case 3:
            overflow();
            break;
    case 4:
            underflow();
            break;
    case 5:
            peek();
            break;
    case 6:
            display();
            break;
    case 7:
            exit(1);
            break;
    default:
        printf("Invalid choice\n");
        break;
        }
    }
}

