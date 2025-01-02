#include<stdio.h>

int main()
{
    int a,b;
    
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);
    
    printf("Addition is: %d",a+b);
    printf("\nSubtraction is: %d",a-b);
    printf("\nMultiplication is: %d",a*b);
    printf("\nDivision is: %d",a/b);
    printf("\nRemainder is: %d",a%b);
    
    return 0;
}