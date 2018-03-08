#include<stdio.h>
int main()
{
 int a,b,ans;
 printf("enter two num:");
 scanf("%d %d",&a,&b);
printf("difference:");
ans=a-b;
printf("%d",ans);
if(ans%2==0)
{
 printf("even");
 }
 else
 {
  printf("odd");
  }
  return 0;
  }
