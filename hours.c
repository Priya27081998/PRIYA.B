#include<stdio.h>
int main()
{
 int hrs,min,m;
  printf("enter min:");
  scanf("%d",&m);
  printf("hrs:");
  hrs=m/60;
  printf("%d",hrs);
  printf("min:");
  min=m%60;
  printf("%d",min);
  }
