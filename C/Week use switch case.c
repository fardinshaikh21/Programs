#include<stdio.h>

int main()
{
    char ch;
    
    printf("\n0.Exit");
    printf("\n1.Monday");
    printf("\n2.Thuesday");
    printf("\n3.Wednesday");
    printf("\n4.Thursday");
    printf("\n5.Friday");
    printf("\n6.Saturday");
    printf("\n7.Sunday");
    
    printf("\nEnter Your Choice: ");
    scanf("%c",&ch);
    
    switch(ch)
    {
      case '1':
      printf("Today is Monday");
      break;
      case '2':
      printf("Today is Thuesday");
      break;
      case '3':
      printf("Today is Wednesday");
      break;
      case '4':
      printf("Today is Thursday");
      break;
      case '5':
      printf("Today is Friday");
      break;
      case '6':
      printf("Today is Saturday");
      break;
      case '7':
      printf("Today is Sunday");
      break;
    
     default:
     printf("Invalid Choice!!!");
    } 
    
    return 0;
}