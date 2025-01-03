#include<stdio.h>

int main()
{
    int n,i,sum=0;
    
    printf("Enter the Number: ");
    scanf("%d",&n);
    
    for(i=1;i<n;i++)
    {
      if(n%i==0)
     {
       sum=sum+i;
     }
    }
    
    if(sum==n)
    {
      printf("%d This is Perfect Number",n);
    }
    else
    {
       printf("%d This is Not Perfect Number",n);
    }
    return 0;
}