#include<stdio.h>
#include<conio.h>
void Toh(int ,char,char,char);
int main()
{
   int a;
   printf("enter the number of disks : ");
   scanf("%d",&a);
   printf("\n");
   Toh(a,'A','B','C');;
   getch();
   return(0);
}
void Toh(int n,char beg,char aux,char end)
{
  if(n>=1){
     Toh(n-1,beg,end,aux);
     printf("%d Disk move to %c to %c \n",n,beg,end);
     Toh(n-1,beg,end,aux);
  }
} 