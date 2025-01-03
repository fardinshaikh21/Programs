#include<stdio.h>

void table(int n)
{
   int i;

  printf("\n%d This Number Table is:\n",n);

  for(i=1;i<=10;i++)
   {
     printf("\t(%d * %d) = %d\n",n,i,n*i);
   }
}

void fac(int n)
{
  int i,fac=1;

  for(i=1;i<=n;i++)
  {
    fac=fac*i;  
  }
  printf("Factorial is: %d",fac);
}

void sum()
{
   int sum=0,r,n;

   printf("Enter the Number: ");
   scanf("%d",&n);
   while(n>0)
  {
     r=n%10;
     sum=sum+r;
     n=n/10;
  }
 
  printf("Sum of Digit is:%d",sum);
}

void rev()
{
   int rev=0,r,n;

   printf("Enter the Number: ");
   scanf("%d",&n);
   while(n>0)
  {
     r=n%10;
     rev=rev*10+r;
     n=n/10;
  }

  printf("\nReverse Number is:%d",rev);

}
int main()
{
    int n,ch;
    
    printf("Enter Any Number: ");
    scanf("%d",&n);
    
    do
    {
      printf("\n0.Exit");
      printf("\n1.Table");
      printf("\n2.Factorial");
      printf("\n3.Sum");
      printf("\n4.Reverse");
      printf("\n\nEnter Your Choice: ");
      scanf("%d",&ch);
    
      switch(ch)
      {
         case 1: 
                 table(n);
                 break;
         case 2:
                 fac(n);
                 break;
         case 3:
                sum();
                break;
         case 4:
                rev();
                break;
            
        default : printf("Invalid Choice");
      }
    
    }while(ch!=0);
    
    
    
    return 0;
}