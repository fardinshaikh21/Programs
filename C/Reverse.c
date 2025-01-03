#include<stdio.h>

int main()
{
    int n,rev=0;
    
    printf("Enter The Number: ");
    scanf("%d",&n);
    
    while(n>0)
    {
       rev=rev*10 + n%10;
       n=n/10;
    }
    
    printf("The reverse num is:%d",rev);
    return 0;
}