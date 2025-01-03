#include<stdio.h>

int main()
{
    int x,y,ch,i;
    
    printf("\nEnter Two Numbers: ");
    scanf("%d %d",&x,&y);
    
   do
  {
    printf("\n\n0.Exit"); 
    printf("\n1.Check X is equal to Y");
    printf("\n2.Check X is Less Than Y");
    printf("\n3.Numbers Between X & Y");
    printf("\n4.Swap the Numbers");
    
    printf("\n\nEnter Your Choice : ");
    scanf("%d",&ch);
    
   // printf("\nEnter Two Numbers: ");
   // scanf("%d %d",&x,&y);
  
    switch(ch)
    {
      case 1:
    
      if(x==y)
      {
        printf("X is Equal to Y");
      }
      else
      {
        printf("X is Not Equal to Y");
      }
    
      break;
    
      case 2:
      
      if(x<y)
      {
        printf("X is Less Than Y");
      }
      else
      {
        printf("X is Greater Than Y");
      }
      
      break;
    
      case 3:
    
      for(i=x;i<=y;i++)
      {
         i++;
      }
       
      printf("The Number Between X & Y %d",i);

      break;
    
      case 4:
    
      x=x+y;
      y=x-y;
      x=x-y;
    
      printf("After Swap is x=%d & y=%d",x,y);
  
      break;
     }
  
  }while(ch!=0);
    return 0;
}