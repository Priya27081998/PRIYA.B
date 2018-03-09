#include<stdio.h>
int main()
{
 char a[20];
 int i,count=0;
 printf("enter the string:");
 scanf("%[\n]s",&a);
 for(i=0;i!=strlen(a);i++)
 {
  if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
  count++;
  }
  if(count==0)
  printf("no");
  else
   printf("yes");
   }
 
