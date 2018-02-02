#include<stdio.h>
  int main()
{
 char str[100];
 int i=0,count=0;
 printf("enter the string:");
 gets(str);
 while(str[i]!='\0')
 {
  if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
 {
  count++;
  }
  i++;
  }
  printf("no of space %d",count);
  }
