#include<stdio.h>
int main()
{
 char s[50];
 printf("enter the string:");
 scanf("%s",s);
 if(((s>='a)||(s>='z'))&&((s>='0')||(s>='9')))
 {
 printf("yes");
 }
 else
 {
 printf("no");
 }
 return 0;
 }
