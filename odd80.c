#include<stdio.h>
int main()
{
 int n,n1,i;
 printf("enter a num:");
 scanf("%d",&n);
 while(n!=0)
 {
  n1=n%10;
  if(n1%2!=0)
  {
  printf("%d",n1);
  }
   n=n/10;
   }
   }
