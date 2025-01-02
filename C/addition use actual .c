#include<stdio.h>

int main()
{
   int add(int,int);
   int a,b,sum;

   printf("Enter Two Numbers: ");
   scanf("%d %d",&a,&b);
   
    sum=add(a,b);
    printf("sum is:%d",sum);
    
 }
 
   int add(int a,int b)
 {
  
   return a+b;
 }