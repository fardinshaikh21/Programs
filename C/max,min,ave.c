#include<stdio.h>

int main()
{
    int a,b,c,ave;
    
    printf("Enter Three Numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    
    ave=(a+b+c)/3;
    
    printf("Average is: %d",ave);
    
    (a>b && a>c)? printf("\nMaximum Number %d",a):(b>c)? printf("\nMaximum Number %d",b):printf("\nMaximum Number %d",c);
    
    (a<b && a<c)? printf("\nMinimum Number %d",a):(b<c)? printf("\nMinimum Number %d",b):printf("\nMinimum Number %d",c);
    
    return 0;
}