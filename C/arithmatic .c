#include<stdio.h>

int main()
{
    int a,b;
    
    printf("ENTER THE NUMBERS: ");
    scanf("%d %d",&a,&b);
    
    printf("Addition is %d",a+b);
    printf("\nSubtraction is %d",a-b);
    printf("\nMultiplication is %d",a*b);
    printf("\nRemainder is %d",a%b);
    printf("\nDivided is %d",a/b);
    
    
    
    return 0;
}