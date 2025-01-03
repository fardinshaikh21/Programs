#include<stdio.h>

int main()
{
    float v,h,r,pi;
    
    printf("Enter hight and redius: ");
    scanf("%f %f",&h,&r);
    
    pi=3.14;
    
    v=(4/3)*pi*h*(r*r*r);
    
    printf("The Volume of Sphere is %f",v);
    
    return 0;
}