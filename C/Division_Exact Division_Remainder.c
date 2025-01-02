#include<stdio.h>

int main()
{
    int a,b;
   
    printf("Enter Two Number: ");
    scanf("%d %d",&a,&b);
   
  printf("Division is: %d",a/b);
  printf("\nExact Division is: %f",(float)a/b);
  printf("\nRemainder is: %d",a%b); 


    return 0;
}