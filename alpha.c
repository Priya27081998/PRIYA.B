#include<stdio.h>
void main()
{
 char c;
 printf("enter a character:);
 scanf("%c",&c);
 if((c>='a'&&c<='z')//(c>='A'&&c<='Z'))
 {
   printf("is alphabet");
   }
 else
 {
  printf("not alphabet");
  }
  getch();
  return 0;
  }
