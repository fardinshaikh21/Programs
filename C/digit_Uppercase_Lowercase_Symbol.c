#include<stdio.h>

int main()
{
    char ch;
    
    printf("Enter Any One Character: ");
    scanf("%c",&ch);
    
    if(ch>='A' && ch<='Z')
    {
      printf("This is Uppercase");
    }
    else if(ch>='a' && ch<='z')
    {
      printf("This is Lowercase");
    }
    else if(ch>='0' && ch<='9')
    {
      printf("This is Digit");
    }
    else
    {
      printf("Special Symbol");
    }
    return 0;
}