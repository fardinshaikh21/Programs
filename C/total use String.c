#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    int i,alpha=0,digit=0,spechar=0,len=0;
    
    printf("Enter Any string: ");
    gets(str);
    
    for(i=0;str[i];i++)
    {
        len++;
       
       if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
       {
          alpha++;
       }
       else if(str[i]>=48 && str[i]<=57)
       {
          digit++;
       }
       else
       {
          spechar++;
       }
    
    }
    
    printf("String Length is:%d",len);
    printf("\nTotal Alphabet is:%d",alpha);
    printf("\nTotal Digit is:%d",digit);
    printf("\nTotal Special character is:%d",spechar);
   
     return 0;
}