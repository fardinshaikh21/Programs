#include<stdio.h>

int main()
{
    int a,b;
    
    printf("Enter First side Shape: ");
    scanf("%d",&a);
   
    printf("Enter Second side Shape: ");
    scanf("%d",&b);
    
    if(a==b)
    {
      printf("This is Square");
      printf("\nArea Of Square is: %d",a*b);
    }
    else
    {
      printf("This is Rectangle");
      printf("\nArea of Rectangle is: %d",a*b);
    }
    return 0;
}