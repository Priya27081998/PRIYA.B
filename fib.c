#include<stdio.h>
int main()
{
 int f1,f2,f,n;
 f1=0;
 f2=1;
 printf("enter the value:");
 scanf("%d",&n);
 printf("\n %d",f1);
 printf("\n %d",f2);
 do
 {
  f=f1+f2;
  printf("%d",f);
  f1=f2;
  f2=f;
  }
  while(f<n);
  }
