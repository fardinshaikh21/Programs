#include<stdio.h>

int main()
{
   float h,r,v;
   
   printf("Enter Volume of Sphere: ");
   scanf("%f %f",&h,&r);

   v=(4/3)*3.14*h*(r*r*r);

   printf("The Volume of Sphere is:%f",v);

  
    return 0;
}