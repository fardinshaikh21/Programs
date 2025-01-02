#include<stdio.h>
#include<string.h>
#include<conio.h>


void main()
{
    char f[100],s[100];
    int cmp;
    
    printf("ENTER THE STRING: ");
    scanf("%s",&f);
    
    strcpy(s,f);
    strrev(f);
    
    cmp=strcmp(f,s);
    
    if(cmp==0)
    {
      printf("this string is Palindrome");
    }
    else
    {
      printf("this string is Not Palindrome");
    }
    
    getch();
}