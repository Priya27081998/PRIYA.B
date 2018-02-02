#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int i=0,words;
 printf("enter the string:");
 gets(str);
 while(str[i]!='\0')
 if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
 {
  words++;
  }
  i++;
  }
  printf(" \n total no of word in the string %d",words);
  }
 
