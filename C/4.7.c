#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 double x1,y1,x2,y2,ans;
 int ch;
 printf("\nEnter Point A:");
 scanf("%lf%lf",&x1,&y1);
 
 printf("\nEnter Point B:");
 scanf("%lf%lf",&x2,&y2);
 
 printf("\n1.Distance\n2.Slop\n3.Quadrant\n4.Exit");

   while(ch!=4)
  {
   printf("\nEnter your choice:");
   scanf("%d",&ch);
      
   switch(ch)
  {
    case 1:
    ans=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    ans=sqrt(ans);
    printf("\nDistance is %lf:",ans);
    break;
   
    case 2:
    ans=(y2-y1)/(x2-x1);
    printf("\nSlop is %lf:",ans);
    break;
         
    case 3:
    if(x1>0 &&x2>0 &&y1>0 &&y2>0)
    printf("\nIn same quadrant and in First quadrant:");
    break;
  }
  }
}