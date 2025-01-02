#include<stdio.h>

int main()
{
   int add(int,int);
   int a,b,sum;

   printf("Enter Two Number:");
   scanf("%d %d",&a,&b);

   sum=add(a,b);

   printf("The Sum is:%d",sum);

  return 0;
}

 int add(int a,int b)
{
   return a+b;
}