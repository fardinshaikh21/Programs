#include<stdio.h>

int main()
{
    int ch;
    
    printf("Enter Your Choice: ");
    scanf("%d",&ch);
    
    switch(ch)
    {
      case 1:
      printf("Today is Sunday");
      break;
      case 2:
      printf("Today is Monday");
      break;
      case 3:
      printf("Today is Thuesday");
      break;
      case 4:
      printf("Today is Wendsday");
      break;
      case 5:
      printf("Today is Thursday");
      break;
      case 6:
      printf("Today is Friday");
      break;
      case 7:
      printf("Today is Saturday");
      break;
      default:
      printf("Invalid Choice");
    }
    return 0;
}