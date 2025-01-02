#include<stdio.h>

int main()
{
    int a,b,c;
    int ave;
    
    printf("Enter First Numbar: ");
    scanf("%d",&a);
    printf("Enter Second Numbar: ");
    scanf("%d",&b);
    printf("Enter Third Numbar: ");
    scanf("%d",&c);
    
    ave=(a+b+c)/3;
    printf("Average is:%d\n",ave);
    
    (a<b && a<c)?
    printf("\bFirst=%d is Minimum Number",a):
    (b<c && b<a)?
    printf("\nSecond=%d is Minimum Number",b):
    printf("\nThird=%d is Minimum Number",c);
    
    (a>b && a>c)?
    printf("\nFirst=%d is Maximum Number",a):
    (b>c && b>a)?
    printf("\nSecond=%d is Maximum Number",b):
    printf("\nThird=%d is Maximum Number",c);
    
    
    return 0;
}