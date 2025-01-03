#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter Any Numbers: ");
    scanf("%d",&n);
    
    if(n>0)
    {
      printf("It is positive number");
    }
    else
    {
      printf("It is Negative Number");
    }
    return 0;
}