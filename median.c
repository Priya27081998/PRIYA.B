#include<stdio.h>
int main()
{
 int a[100],j,n,i,temp,med;
 printf("enter the array size:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",a[i]);
  }
  for(i=0;i<n;i++)
  {
   for(j=i+1;j<n;j++)
   {
    if(a[i]>a[j])
    {
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;
     }
     }
     }
     if(n%2==0)
     {
     med=(n/2);
     printf("the median element in the array is %d",a[med]);
     }
     else
     {
      med=n/2;
      printf("the median element in the array is %d",a[med]);
      }
      return 0;
      }
