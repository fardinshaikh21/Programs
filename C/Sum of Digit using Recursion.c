#include<stdio.h>

/*int Sum(int n)
{

   if(n<1)
   {
     return 0;
   }
   else
   {
       return n + Sum(n-1);
   }
}*/

int Addition(int n)
{
  if(n==0)
  {
    return 0;
  }
  else
  {
     return  ( n % 10 + Addition(n / 10));
  }
}
int main()
{
     int n ;
     
     printf("Enter the Number : ");
     scanf("%d",&n);
     
    // printf("Sum is : %d ",Sum(n));
   
    int result = Addition(n);
   
    printf("Sum of %d This Number is : %d ",n,result);
    
    return 0;
}

 