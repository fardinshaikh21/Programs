#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter The Numbar: ");
    scanf("%d",&n);
    
    (n==0)?
    printf("%d Zero Value",n):
    (n>0)? 
    printf("%d This is Positive Number",n):
    printf("%d This is Negetive Number",n);
    return 0;
}