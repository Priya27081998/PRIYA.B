#include<stdio.h>
int main()
{
 char a[10];
 printf("enter the string:");
 scanf("%[^\n]s",&a);
 if(a==strrev(a))
 {
 printf("palindrome");
 }
 else
 {
 printf("not palindrome");
 }
 return 0;
 }
