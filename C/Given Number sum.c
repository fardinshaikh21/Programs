#include<stdio.h>

int main()
{
    int n,r,sum=0;
    
    printf("Enter Any Number: ");
    scanf("%d",&n);
    
    while(n>0)
    {
       r=n%10;
       sum=sum+r;
       n=n/10;
    }
    
    printf("The given Number sum is:%d",sum);
   
    return 0;
}