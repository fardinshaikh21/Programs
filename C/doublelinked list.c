#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
   int data;
   struct node *next,*prev;
}NODE;

 NODE *head=NULL,*nn,*temp;

void createlist()
{
   
    int n,i;
    
    printf("HOW MANY NODES YOU WANT : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
       nn=(NODE*)malloc(sizeof(NODE));
       printf("\nENTER THE NODES : ");
       scanf("%d",&nn->data);
       nn->next=NULL;
       nn->prev=NULL;
   
    
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
   }
}
     
 void displaylist()     
 {
    temp=head;
    
    while(temp!=NULL)
    {
       printf("%d->",temp->data);
       temp=temp->next;
    }
 }

  int main()
 {
    createlist();
    displaylist();
    
    return 0;
}