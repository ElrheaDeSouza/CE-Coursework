#include<stdio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define TAB '\t'
#define MAX 50

void push(char symbol);
char pop ();
long int evalPost();
int priority(char symbol);
char postfix[MAX];
char stack[MAX];
int top;

int is_Empty()
{
    return(top==-1);
}

void push(char symbol)
{
    if(top>MAX){
        printf("Stack Overflow!");
        return;
    }
    stack[++top]=symbol;
}

char pop()
{
    if(is_Empty())
    {
        printf("Stack Underflow");
        exit(1);
    }
    return stack[top--];
}

int whiteSpace(char symbol){
    return (symbol==' ' || symbol==TAB) || symbol == '\n';
}

long int evalPost()
{
long int a, b, temp, result;
int i;
 for(i=0;i<strlen(postfix);i++)
    {
    if(!whiteSpace(postfix[i]))
    {
if(postfix[i]>='0' && postfix[i]<='9')
    {
    push(postfix[i]-'0');
    }
else
    {
    a=pop();
    b=pop();
    switch(postfix[i])
    {
        case '+': push(b+a); break;
        case '-': push(b-a); break;
        case '*': push(b*a); break;
        case '/': push(b/a); break;
        case '^': temp = pow(b, a); push(temp); break;
    }
  }
 }
}
result = pop();
return result;
}

int main()
{
    long int value;
    top=-1;
    printf("Enter postfix expression:");
    gets(postfix);

    value=evalPost();
    printf("Value of Expression:%ld\n",value);
    return 0;
}
