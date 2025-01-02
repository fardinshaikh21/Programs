#include<stdio.h>

int main()
{
    char ch;
    
    printf("Enter The character: ");
    scanf("%s",&ch);
    
    if(ch>='A' && ch<='Z')
    {
       printf("Uppercase");
    }
    else if(ch>='a' && ch<='z')
    {
      printf("Lowercase");
    }
    else if(ch>='0' && ch<='9')
    {
      printf("Digit");
    }
    else
    { 
       printf("Special character");
    }
    return 0;
}