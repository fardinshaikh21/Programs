#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter The Number: ");
    scanf("%d",&n);
    
    if(n>0)
    {
      printf("Number is Positive");
    }
    else
    {
      printf("Number is Negative");
    }
    
    return 0;
}