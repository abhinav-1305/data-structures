#include<stdio.h>
#include<conio.h>
#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE],top=-1;
void main()
{
int value,choice;
while(1){
printf("\n\n********MENU********\n");
printf("1.push\n 2.pop\n 3.display\n 4.exit\n);
printf("\ enter the choice: ");
scanf("%d",&choice);
switch(choice){
case 1: printf("enter the value to insert:");
        scanf("%d",&value);
        push(value);
        break;
case 2: pop()
        break;
case 3: display()
        break;
case 4: exit(0)
default: printf("\n wrong choice given check again !!!!");
      }
   }
}

void push(int value){
if(top==SIZE-1)
printf("\n stack is full!!!");
else{
    top++;
    stack[top]=value;
    printf("\n The element is inserted !!!");
    }
}
void pop(){
if(top==-1)
printf("\n the stack is empty deletion is not possible!!");
else{
printf("\n element deleted :%d, stack[top]");
top--;
   }
}

void display(){
if(top==-1)
printf("stack is empty");
else{
  int i;
  printf("\n stack elements are:\n");
  for(i=top;i>=0;i--)
  printf("%d"\n,stack[i]);
    }
}







