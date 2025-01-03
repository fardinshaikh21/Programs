#include<stdio.h>

int queue[5],f=-1,r=-1;

void rear()
{
  int item;

  if(r==5-1)
  {
     printf("Queue is Full");
  }
  else
  {
     if(f==-1)
     {
        f=0;
     }
     printf("\nInsert New Element:");
     scanf("%d",&item);
     r=r+1;
     queue[r]=item;
    
  } 
}

void front()
{
  if(f==-1)
  {
     printf("\nQueue is Empty");
  }
  else
  {
     printf("Deleted %d",queue[f]);
     f=f+1;
  }
}

void display()
{
  int i;
 
 if(f==-1)
 {
    printf("\nQueue is Empty");
 }
 else
 {
   printf("\nQueue in Elements are:\n");
   for(i=f;i<=r;i++)
   {
     printf("%d ",queue[i]);
   }
 }

}

int main()
{
    int ch;
    
    do
   {
      printf("\n0.Exit");
      printf("\n1.Rear");
      printf("\n2.Front");
      printf("\n3.Display Queue");
    
      printf("\nEnter Your Choice:");
      scanf("%d",&ch);
    
     switch(ch)
     {
        case 1: 
                rear();
                break;
        case 2: 
                front();
                break;
        case 3: 
                display();
                break;
            
         default: printf("\nInvalid Choice");
             
     }
    
   }while(ch!=0);

    return 0;
}