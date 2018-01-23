#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,d;
 printf("enter the limit");
 scanf("%d",&n);
 printf("enter the number");
 scanf("%d",&d);
 printf("the num divisible by %d are",d);
 for(i=1;i<=n;i++)
 if(i%d==0)
 {
  printf("%d/t",i);
  }
   getch();
   }
 
