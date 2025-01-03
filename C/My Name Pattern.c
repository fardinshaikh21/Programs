#include<stdio.h>

int main()
{
    char str[]="FARDIN";
    int i,j,len;
    
    len=strlen(str);
    
    for(i=0;i<len;i++)
    {
      for(j=0;j<=i;j++)
     {
      printf("%c",str[j]);
     }
     printf("\n");
    }
    return 0;
}