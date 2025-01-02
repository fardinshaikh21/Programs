#include<stdio.h>

int main()
{
    int a,b,c,s;
   
    printf("Enter Any Two Numbers: ");
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
    scanf("%d",&s);
   
    
    if(s==1)
    {
      c=a+b;
      printf("Addition is: %d",c);
    }
    else if(s==2)
    {
      c=a-b;
      printf("Subtraction is: %d",c);
    }
    else if(s==3)
    {
      c=a*b;
      printf("Multiplication is: %d",c);
    }
    else if(s==4)
    {
      c=a/b;
      printf("Division is: %d",c);
    }
    else if(s==5)
    {
      c=a%b;
      printf("Remainder is: %d",c);
    }
    else
    {
       printf("Invalid Choice!!!");
    }
    
  }
    while(s!=0);
    
    return 0;
}