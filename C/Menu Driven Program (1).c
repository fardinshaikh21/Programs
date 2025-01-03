#include<stdio.h>

int main()
{
   int a,b,ch;

   printf("Enter Two Numbers: ");
   scanf("%d %d",&a,&b);

    do
   {
     printf("\n0.Exit");
     printf("\n1.Addition");
     printf("\n2.Subtraction");
     printf("\n3.Multiplication");
     printf("\n4.Division");
     printf("\n5.Reminder");
     printf("\nEnter Your Choice: ");
     scanf("\n%d",&ch);
     
       switch(ch)
     {  
    
       case 1:
       printf("Addition is:%d",a+b);
       break;
       case 2:
       printf("Subtraction is:%d",a-b);
       break;
       case 3:
       printf("Multiplication is:%d",a*b);
       break;
       case 4:
       printf("Division is:%d",a/b);
       break;
       case 5:
       printf("Reminder is:%d",a%b);
       break;
  
     }
    
    }while(ch!=0);
    
    return 0;
}