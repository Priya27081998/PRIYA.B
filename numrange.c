#include<stdio.h>
int main(void)
{
 int a,m,n;
 printf("enter the range:");
 scanf("%d %d",&m,&n);
 printf("enter the num:");
 scanf("%d",&a);
 if((a>=m)&&(a<=n))
 {
  printf("%d yes",a);
  }
  else
  {
   printf("%d no",a);
   }
   return 0;
   }
