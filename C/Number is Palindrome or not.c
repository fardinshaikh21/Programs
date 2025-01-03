#include<stdio.h>

int main()
{
     int n,t,sum=0,r;
    
    printf("Enter The Number: ");
    scanf("%d",&n);
    
    t=n;
    
    while(n>0)
    {
       r=n%10;
       sum=sum*10+r;
       n=n/10;
    }
    
    if(t==sum)
    {
      printf("This is Palindrome Number");
    }
    else
    {
      printf("This is Not Palindrome Number");
    }
    return 0;
}