#include<stdio.h>

int main()
{
    char i;    
    printf("\tA to Z ASCII VALUES\n\n");
    
    for(i='A';i<='Z';i++)
    {
       printf("\t\t%c=%d\n",i,i);
    }
      
    printf("\n\n");
    printf("\ta to z ASCII VALUES\n\n");
    
    for(i='a';i<='z';i++)
    {
      printf("\t\t%c=%d\n",i,i);
    }
    
    printf("\n\n");
    printf("\tSpecial Symbols ASCII VALUES\n\n");
    
    for(i=33;i<=64;i++)
    {
      printf("\t\t%c=%d\n",i,i);
    }
    for(i=91;i<=96;i++)
    {
      printf("\t\t%c=%d\n",i,i);
    }
    for(i=123;i<=127;i++)
    {
      printf("\t\t%c=%d\n",i,i);
    }
    
    printf("\n\n\n");
    printf("\tALL ASCII VALUES\n\n\n");
    
    for(i=33;i<=127;i++)
    {
      printf("\t\t%c==%d\n",i,i);
    }
    return 0;
}