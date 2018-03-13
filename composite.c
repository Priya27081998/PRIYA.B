#include<stdio.h>
int main()
{
 int a,i,count=0;
 printf("enter the num:");
 scanf("%d",&a);
 for(i=2;i<a;i++)
 {
  if(a%i==0)
  count++;
  }
  if(count==0)
  {
   printf("yes");
   }
   else
   {
    printf("no");
    }
    return 0;
    }
