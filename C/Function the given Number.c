#include<stdio.h>

int main()
{
    int sum(int);
    int n;
    
    printf("Enter Any Number: ");
    scanf("%d",&n);
    
    sum(n);
    
    return 0;
}

   int sum(int n)
  {
     int r,sum=0;
     
     while(n>0)
    {
      r=n%10;
      sum=sum+r;
      n=n/10;
    }
    
    printf("The Given Number Sum is:%d",sum);
  }