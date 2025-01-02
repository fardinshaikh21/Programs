#include<stdio.h>

int main()
{
    float r,c;
    
    printf("Enter Redius: ");
    scanf("%f",&r);
    
    c=3.14*r*r;
    
    printf("The Circumference of circle is:%f",c);
    return 0;
}