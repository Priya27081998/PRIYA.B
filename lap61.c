#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
int n,i;
printf("enter the string:");
scanf("%[^\n]s",s);
printf("enter the last position string:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("%c",s[i]);
}
}
