#include<stdio.h>

int factorial(int n)
{
  if(n<=1)
 {
    return(1);
 }
 else
 {
    n=n*factorial(n-1);
    return(n);
 }
} 

int main()
{
    int n;
    
    printf("Enter the Number: ");
    scanf("%d",&n);
    
    printf("factorial of %d is %d",n,factorial(n));
    return 0;
}