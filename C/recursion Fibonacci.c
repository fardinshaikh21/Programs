#include <stdio.h>

 void fibonacci(int);
  
 int main() 
{
  int limit;
   
  printf("Enter number of terms to be printed\n");
  scanf("%d",&limit);
    
  fibonacci(limit);
    
  return 0;
}
 
  void fibonacci(int num) 
 {
   int num1=0,num2=1,num3,count;
     
   printf("%d\n%d\n",num1,num2);
     
   for(count=3;count<=num;count++)
   {
     num3=num1+num2;
     printf("%d\n",num3);
     num1=num2;
     num2=num3;
   }
 }