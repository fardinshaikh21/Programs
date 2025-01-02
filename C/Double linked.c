#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
   int data;
   struct node *next,*prev;
}NODE;

int main()
{
    int n,i;
    
    NODE *head=NULL,*temp,*nn;
    printf("HOW MANY NODES YOU WANT : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
       nn=(NODE*)malloc(sizeof(NODE));
       printf("\nENTER THE NODES : ");
       scanf("%d",&nn->next);
       nn->next=NULL;
       nn->prev=NULL;
    }
    
    if(head==NULL)
    {
       head=temp=nn;
    }
    else
    {
       temp->next=nn;
       nn->prev=temp;
       temp=nn;
    }
       temp=head;
    
    while(temp!=NULL)
    {
       printf("\n%d",temp->data);
       temp=temp->next;
    }
    return 0;
}