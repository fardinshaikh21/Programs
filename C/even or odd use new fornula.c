#include<stdio.h>

int main()
{
    int n,s;
    
    printf("Enter Any Number: ");
    scanf("%d",&n);
    
    s=n/2;
    
    if(s*2==n)
    {
      printf("%d This is Even Number",n);
    }
    else
    {
      printf("%d This is odd Number",n);
    }
    return 0;
}