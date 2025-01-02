#include<stdio.h>

int main()
{

    char str[100];
    int i,alpha=0,digit=0,spechar=0,count=0;

    printf("Enter the string: ");
    gets(str);

    for(i=0; str[i]; i++)
    {
         count++;
        
        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
        {
            alpha++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            spechar++;
        }
    }
    
    printf("\nTotal String is:%d",count);
    printf("\nTotal Alphabet is:%d",alpha);
    printf("\nTotal Digit is:%d",digit);
    printf("\nTotal special Characters is:%d", spechar);
    return 0;
}