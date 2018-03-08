#include<stdio.h>
int main()
{
int n,s=0,p=1,r=2,i;
printf("enter the num:");
scanf("%d",&n);
while(n!=1)
{
 n=n/2;
s++;
}
for(i=0;i<s+1;i++)
{
 p=p*r;
 }
 printf("nearest greatest power of 2 is:%d",p);
 return 0;
 }
