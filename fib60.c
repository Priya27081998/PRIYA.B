#include<stdio.h>
int main()
{
 int t1=0,t2=1,n=0,r;
 printf("enter the num:");
 scanf("%d",&r);
 printf("%d\t%d\t",t1,t2);
 while(n!=r)
 {
  n=t1+t2;
  t1=t2;
  t2=n;
  printf("%d\t",n);
  }
  }
