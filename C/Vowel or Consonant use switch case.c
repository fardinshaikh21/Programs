#include<stdio.h>

int main()
{
    char c;
    
    printf("Enter Any One Character: ");
    scanf("%c",&c);
    
   switch(c)
   {  case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A': 
      case 'E':
      case 'I': 
      case 'O':
      case 'U':
      printf("%c This Character is Vowel",c);
      break;
    
     default:
     printf("%c This Character is Consonant",c);
   }

   return 0;
}