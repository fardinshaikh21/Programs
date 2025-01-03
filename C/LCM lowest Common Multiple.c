#include<stdio.h>

int main()
{
    int a,b,lcm;
    
    printf("Enter Two Number : ");
    scanf("%d %d",&a,&b);
    
    a = (a>0) ? a:-a;
    b = (b>0) ? b:-b;
     
    if(a>b)
    {
       lcm=a;
    }
    else
    {
      lcm=b;
    }
    
    while(1)
   {
     if(lcm%a==0 && lcm%b==0)
     {
      printf("LCM of %d & %d is:%d",a,b,lcm);
      break;
     }
       lcm++;
   }
    return 0;
}