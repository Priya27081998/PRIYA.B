#include<stdio.h>
int main()
{
 int n,g,a[10];
 printf("enter ten num:");
 for(n=0;n<10;n++)
 {
 scanf("%d",a[n]);
 }
 g=a[0];
 for(n=1;n<10;n++)
 {
 if(a[n]>g)
 {
 g=a[n];
 }
 }
 printf("greatest %d",g);
 }
