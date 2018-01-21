#include<stdio.h>
void main()
{
 int x,y,rem,i;
 printf("give the first num for the range:/n);
 scanf("%d",&x);
 printf("give the final num for the range:/n);
 scanf("%d",&y);
 printf("the even num between %d and %d",x,y);
 for(i=x;i<=y;++i)
 {
  rem=i%2;
  if(rem==0)
  printf("/n%d",i);
  }
  return 0;
  }
