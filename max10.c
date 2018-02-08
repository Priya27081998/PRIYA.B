#include<stdio.h>
int main()
{
 int a=10,b[25],i,c;
 printf("\n array elements are:");
 for(i=0;i<a;i++)
 {
  scanf("%d",&b[i]);
  }
  c=b[0];
  for(i=0;i<a;i++)
  if(c<b[i])
  {
   c=b[i];
   }
   printf("%d",c);
   }
  
