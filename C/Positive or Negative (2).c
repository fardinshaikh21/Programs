#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter Any Number: ");
    scanf("%d",&n);
    
    if(n>=0)
    {
      printf("This is Positive Number");
    }
    else
    {
      printf("This is Negative Number");
    }
    return 0;
}