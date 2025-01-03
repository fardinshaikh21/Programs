#include<stdio.h>

int main()
{
   // int nsum(int n);
    int n,sum;
    printf("Enter the Number: ");
    scanf("%d",&n);
    
   sum=nsum(n);
   printf("Sum of n Number is:%d",sum);
    return 0;
}

int nsum(int n)
{
  if(n==0)
  return 0;
  else
  return n+nsum(n-1);
}