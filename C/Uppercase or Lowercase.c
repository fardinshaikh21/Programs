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
    else
    {
      printf("Invalid");
    }
    return 0;
}