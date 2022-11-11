#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

char stack[MAX];
char postfix[MAX],infix[MAX];
int top=-1;

int main(){
    printf("enetr the infix expression: ");
    gets(infix);
intopost();   //calling the function to covert into infix expression to equivalent postfix expression
print();
return 0;
}

void intopost(){
    int j=0;
    char next;
    char symbol;
    for(int i=0;i<strlen(infix);i++){         //loop for reading all symbols of the loop
      symbol = infix[i];

      //if symbol is not a whitespace
      if(!space(symbol))
      {
      switch(symbol)
      {
        case '(' :
           push(symbol);
           break;
        case ')' :
           while((next=pop()) !='(')
           postfix[j++]=next;
           break; 
           default :
           postfix[j++] = symbol;  

           case '+' :
           case '-' :
           case '*' :
           case '^' :

           while(!isempty() && precedence (stack[top])>= precedence(symbol))
           postfix[j++]=pop();
           push(symbol);
           break;
           default :
           postfix[j++]=symbol;
      }
    }
}
while(!isempty())
postfix[j++]=pop();
post[j]='\0';


int space(char c)
{
    if(c==' ' || c=='\t')
    return 1;
    else
    return 0;
}

int precedence(char symbol){
    switch(symbol){
        case '*' :
        return 3;
        case '/' :
        return 2;
        case '+' :
        case '-'  :
        return 1;
        default:
        return 0;
    }
}


void print(){
    int i=0;
    printf("the equivalent postfix expression is: ");
    while(postfix[i]){
        printf("%c",postfix[i++]);
    }
    printf("\n");
}


void push(cahr c)
{
    if(top==MAX-1){
        printf("stack overflow!!!")
        return; 
    }
    top++;
    stack(top)=c;
}

char pop()
{
       char c;
       if(top==-1){
        printf("stack overflow!!!")
        exit(1);
       }
     c = stack[top];
     top = top-1
     return c;
}


int isEmpty()
{
    if(top==-1)
    return 1;
    else 
    return 0;
}