#include<stdio.h>
void main()
{
 int year;
 printf("enter year:");
 scanf("%d",&year);
 if(year%400==0)
 {
  printf("leap year");
  }
  else if(year%100==0)
  {
   printf("not leap year")
   }
   return 0;
   }
