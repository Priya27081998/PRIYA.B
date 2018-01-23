#include<stdio.h>
int main()
{
 i,j,n,temp;
 int a[1000];
 printf("enter the number:");
 scanf("%d",&n);
 printf("enter array of n number/n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
     if(a[i]>a[j])
     {
      temp=a[j];
      a[j]=a[i];
      a[i]=temp;
      }
      }
      printf("the maximum num is %d/t",a[n-1]);
      return 0;
      }
  
 
