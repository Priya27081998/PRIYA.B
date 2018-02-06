#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
 char a[100]="3&&";
 int b,q=0,int i,char j;
 b=strlen(a);
 for(i=0;i<=b;i++)
 {
  if(ispunct(a[i])
  q++;
  }
  printf("%d",q);
  }
