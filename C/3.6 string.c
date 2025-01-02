#include<stdio.h>

int main()
{
    char s[100];
    int i,vowel=0,consonant=0,count=0,digit=0;

    printf("Enter the String: ");
    gets(s);

    for(i=0; s[i]; i++)
    {
        count++;
       
        if(s[i]>='0' && s[i]<='9')
        {
           digit++;
        }
       else if(s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o'|| s[i]=='u' || s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }

    printf("Total Alphabet is:%d",count);
    printf("\nTotal Digit is:%d",digit);
    printf("\nTotal Vowel is:%d",vowel);
    printf("\nTotal Consonant is:%d", consonant);

    return 0;
}