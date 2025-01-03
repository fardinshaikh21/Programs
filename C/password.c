#include<stdio.h>

int main()
{
    char j,i,s[100];
    
    printf("Enter the Password: ");
    gets(s);
    
   for(i=0;s[i];i++)
    {
       for(j=33;j<=127;j++)
      {
        if(j==s[i])
       { 
         printf("%c",j);
       }
      }
    }
    return 0;
}