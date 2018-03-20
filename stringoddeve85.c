#include<stdio.h>
int main()
{
char a[20],odd[100],eve[100];
int i,o=0,e=0;
printf("enter a string:");
scanf("%s",&a);
for(i=0;a[i]!='\0',i++)
{
if(i%2==0)
{
 odd[o]=a[i];
 o++;
 }
 else
 {
 eve[e]=a[i];
 e++;
 }
 }
 printf("two string are %s\t %s\t"odd,eve);
 }
