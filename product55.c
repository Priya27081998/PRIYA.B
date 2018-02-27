#include<stdio.h>
int main()
{
 int n,m,p;
 printf("enter the num:");
 scanf("%d %d",&n,&m);
 printf("product of num:");
 p=n*m;
 printf("%d",p);
 if(p%2==0)
 {
 printf("even");
 }
 else
 {
 printf("odd");
 }
 return 0;
 }
 
