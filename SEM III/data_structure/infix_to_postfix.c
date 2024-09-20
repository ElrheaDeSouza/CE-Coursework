#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define TAB '\t'
#define MAX 50

char infix[MAX];
char postfix[MAX];
char stack[MAX];
int top;

//Function to check if symbol is a white-space character
int whiteSpace(char symbol){
    return (symbol==' ' || symbol==TAB) || symbol == '\n';
}

//Function to push symbol onto stack
void push(char symbol)
{
    if(top>MAX)
    {
        printf("Stack Overflow!");
        return;
    }
    stack[++top]=symbol;
}

int isEmpty()//Function to check if stack is empty
{
    return(top==-1);
}

char pop()//Function to pop symbol from top of stack
{
    if(isEmpty())
    {
        printf("Stack Underflow");
        exit(1);
    }
    return stack[top--];
}

int priority(char symbol)//Function to check priority of the operators
{
    switch(symbol)
    {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        case '^': return 3;
        default: return 0;
    }
}

void infix_to_postfix()//Function for conversion infix to postfix expression
{
 unsigned int i, p=0;
 char next, symbol;

 for(i=0;i<strlen(infix);i++){
 symbol=infix[i];
 if(!whiteSpace(symbol))
  {
    switch(symbol)
    {
        case '(': push(symbol); break;
        case ')': while((next=pop())!='(')
                    postfix[p++]=next;
                break;
        case '+':
        case '-':
        case '*':
        case '/':
        case '^': while(!isEmpty() && priority(stack[top])>=priority(symbol))
                    postfix[p++]=pop();
                push(symbol);
                break;
        default: postfix[p++]=symbol;
    }
  }
 }
    while(!isEmpty()){
        postfix[p++]=pop();
    }
    postfix[p]='\0';
}

int main()
{
    long int value;
    top=-1;
    printf("Enter Infix expression :");
    fgets(infix, 50, stdin);
    infix_to_postfix();
    printf("Postfix expression is :%s\n",postfix);

    return 0;
}
