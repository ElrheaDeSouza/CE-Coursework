#include<stdio.h>
#define MAX 5 //global max = 5
int top =-1, a[MAX], i; //global variable declaration

void push(int i){//function for push operation
    if(top == MAX -1){
    printf("stack overflow\n\n");
    }
    else{
    top++;
    a[top] = i;
    printf("\nElement inserted successfully\n\n");
    }
}
int pop(){ //function to pop elements from the stack
    if(top == -1 ){
    printf("Stack underflow\n\n");
    return;
    }
    else{
    i= a[top];
    top --;
    printf("Element deleted successfully\n\n");
    }
}
void overflow(){ //function to check overflow condition
    if(top == MAX -1){
    printf("stack overflow\n\n");
    }
    else{
    printf("no stack overflow\n\n");
    }
}
void underflow(){ //function to check underflow condition
    if(top ==-1){
    printf("stack underflow\n\n");
    }
    else{
    printf("no stack underflow\n\n");
    }
}
void peek(){ //function to return top most element
     if(top ==-1){
    printf("stack underflow\n\n");
    }
    else if(top == MAX-1){
    printf("stack overflow\n\n");
    }
    else{
    printf("top elementis %d\n",a[top]);
    }
}
void display(){ //function to display stack
int i;
if(top ==-1){
    printf("stack underflow\n\n");
    }
    else{
        for(i= top ; i>=0; i--){
        printf("%d ", a[i]);
        printf("\n\n");
        }
    }
}

int main(){
    int c;
    while(1){
    printf("\n\n1.push\n2.pop\n3.check stack overflow condition\n4.check stack underflow condition\n5.peek\n6.display\n7.exit\nChoose operation to perform: ");
    scanf("%d", &c);
    switch(c){ //menu driven structure to use stack
    case 1:
            printf("Enter element to insert: ");
            scanf("%d", &i);
            push(i);

            break;
    case 2:
            pop();

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

