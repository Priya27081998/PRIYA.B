#include<stdio.h>
#include<string.h>
int main()
{
 int n,b=0,i;
 char s[20];
 printf("enter the string:");
 scanf("%[^\n]s",&s);
 n=strlen(s);
 for(i=0;i<n;i++)
 {
  if((s[i]=='0')||(s[i]=='1'))
  {
  b+=1;
  }
  }
  if(b==n)
  {
   printf("yes");
   }
   else
   {
   printf("no");
   }
   return 0;
   }
  
