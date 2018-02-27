#include<stdio.h>
int main()
{
int i,j,t;
printf("enter two num:");
scanf("%d %d",&i,&j);
t=i;
i=j;
j=t;
printf("%d %d",i,j);
}
