#include<stdio.h>
int main()
{
 int n,m,s;
 printf("enter a num:");
 scanf("%d",&n);
 if(n<=10)
 {
 printf("10");
  }
  else
  {
 m=n/10;
 s=(m+1)*10;
   }
   printf("%d",s);
   return 0;
   }
