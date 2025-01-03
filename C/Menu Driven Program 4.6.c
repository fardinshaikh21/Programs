#include<stdio.h>

int main()
{
    int n,fac=1,i,ch;
    
    do
    {
       printf("\n\n0.Exit");
       printf("\n1.Factorial");
       printf("\n2.Number is Even or Odd");
     
       printf("\n\nEnter Your Choice: ");
       scanf("%d",&ch);
  
      switch(ch)
      {
         case 1:
        
         printf("\nEnter Number You Want Find this Factorial: ");
         scanf("%d",&n);
        
         for(i=1;i<=n;i++)
        {
          fac=fac*i;
        }
         printf("\n\n%d This Number Factorial is: %d",n,fac);
        
         break;
      
        case 2:
        
        if(n%2==0)
        {
          printf("\n%d is Even Number",n);
        }
        else 
        {
          printf("\n%d is Odd Number",n);
        }
         break;;
      }
    
    } while(ch!=0);
    return 0;
}