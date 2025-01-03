#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

 NODE *head=NULL,*nn,*temp;

 void createList()
{
    int i,n;
    printf("Enter how many node u want:");
    scanf("%d",&n);
  
      for(i=0; i<n; i++)
    {
        nn=(NODE*) malloc(sizeof (NODE));
        printf("\nEnter data\n");
            scanf("%d",&nn->data);
        nn->next=NULL;
        
        if(head==NULL)
        {
            head=temp=nn;
        }
        else
        {   temp->next=nn;
            temp=nn;
        }
    }
}
void displayList()
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
    createList();
    displayList();
   

    return 0;
}