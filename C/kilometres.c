#include<stdio.h>
#include<conio.h>

int main()
{
    float km,m,inch,ft,cm;
    
    printf("Enter Kilometres: ");
    scanf("%f",&km);
    
    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    ft=inch/12;
    
    printf("\nMeter is = %f",m);
    printf("\nCentimetres is = %f",cm);
    printf("\nInches is = %f",inch);
    printf("\nfoot is = %f",ft);
    
    return 0;
}