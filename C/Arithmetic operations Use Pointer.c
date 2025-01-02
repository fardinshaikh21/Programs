#include<stdio.h>

int main()
{
   int a,b,sum;
   int *ptr,*ptr1;
   
   printf("Enter Two Numbers: ");
   scanf("%d %d",&a,&b);

   ptr=&a;
   ptr1=&b;
  
   sum=*ptr + *ptr1;
   printf("Addition is: %d",sum);

   sum=*ptr - *ptr1;
   printf("\nSubtraction is: %d",sum);
   
   sum=*ptr * *ptr1;
   printf("\nMultiplication is: %d",sum);
   
   sum=*ptr / *ptr1;
   printf("\nDivision is: %d",sum);
   
   sum=*ptr % *ptr1;
   printf("\nRemainder is: %d",sum);


    return 0;
}