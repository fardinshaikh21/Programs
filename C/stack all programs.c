#include<stdio.h>
#include<stdlib.h>

int stack[5],top=-1;

void push()
{
    int item;

    if(top==5-1)
    {
        printf("Stack is Full");
    }
    else
    {
        printf("Push Element in Stack:");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("\nStack is Empty");
    }
    else
    {
        printf("\nPOPPED %d",stack[top]);
        top=top-1;
    }
}

void display()
{
    int i;

    if(top>=0)
    {
        printf("\nStack Elements are:\n");

        for(i=top; i>=0; i--)
        {
            printf("%d ",stack[i]);
        }
    }
    else
    {
      printf("\nStack is Empty");
    }

}

void isfull()
{
   if(top==5-1)
   {
     printf("Stack is Full");
   }
   else
   {
    printf("Stack is Not Full");
   }
}

void isempty()
{
  if(top==-1)
  {
    printf("Stack is Empty");
  }
  else
  {
    printf("Stack is Not Empty");
  }
}

int main()
{
    int ch;

    do
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display");
        printf("\n4.isfull");
        printf("\n5.isEmpty");
        printf("\n6.Exit");

        printf("\n\nEnter Your Choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;
         
        case 4:
            isfull();
            break;
            
        case 5:
           isempty();
           break;
        
        default:
            printf("\nInvalid Choice:");
        }

    } while(ch!=6);


    return 0;
}