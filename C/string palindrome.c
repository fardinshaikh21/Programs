#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int main()
{
    char s1[20],s2[20];
    
    printf("Enter the String: ");
    gets(s1);
    
    //puts(s1); //direct print the string
    
    strcpy(s2,s1);
    strrev(s2);
    
    if(strcmp(s1,s2)==0)
    {
      printf("String is Palindrome");
    }
    else
    {
      printf("String is Not Palindrome");
    }
    return 0;
}