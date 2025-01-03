#include<stdio.h>

int main()
{
    int n,s;
    
    printf("Enter Any Number: ");
    scanf("%d",&n);
    
    s=n*(n+1)/2;
    
    printf("This Sum is: %d",s);
   
    return 0;
}