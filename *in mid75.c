#include<stdio.h>
#include<string.h>
int main()
{
 char a[100];
 int m,l;
 printf("enter the string:");
 scanf("%s",&a);
 l=strlen(a);
 if(l%2!=0)
 {
  m=l/2;
  a[m]='*';
  printf("%s",a);
  }
  else
  {
  m=l/2;
  a[m]='*';
  a[m-1]='*';
  printf("%s",a);
  }
  return 0;
  }
