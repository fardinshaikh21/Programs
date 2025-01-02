#include<stdio.h>

int main()
{
    int a,b;
    
    a=2<<2;//0010 //1000 // = 8
    b=8>>2;//1000 //0010 // = 2
    
    printf("a=%d and b=%d",a,b);
    
    return 0;
}