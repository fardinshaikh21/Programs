#include<stdio.h>

int main()
{
   float r,area;
   int ch;
   do
  {
    printf("\n\n0.Exit");
    printf("\n1.Area Of Circle");
    printf("\n2.Area of Square");
    printf("\n\nEnter Your Choice : ");
    scanf("%d",&ch);
    
   switch(ch)
  {
    case 1:
      
    printf("\nEnter The Radius : ");
    scanf("%f",&r);
       
    area = (3.14)*r*r;
    printf("\nArea of Circle is : %f",area);
    break;
    
    case 2:
    
    printf("\nEnter The Radius : ");
    scanf("%f",&r);  
    
    area=r*r;
    printf("\nArea of Square is : %f",area);
    break;
   } 
    
  } while(ch!=0);
   
    return 0;
}