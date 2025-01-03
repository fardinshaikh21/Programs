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
        printf("Enter data\n");
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
void addFirst()
{
    nn=(NODE*) malloc(sizeof (NODE));
    printf("Enter data\n");
    scanf("%d",&nn->data);
    nn->next=head;
    head=nn;
}
void addLast()
{   nn=(NODE*)malloc(sizeof(NODE));
    printf("Enter new node data\n");
    scanf("%d",&nn->data);
    nn->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=nn;
    temp=nn;
}
void inBetween()
{
    int i=0,pos;
    nn=(NODE*)malloc(sizeof(NODE));
    printf("Enter new node data\n");
    scanf("%d",&nn->data);
    nn->next=NULL;
    printf("Enter position :");
    scanf("%d",&pos);
    temp=head;
    for(i=2; i<pos; i++)
    {
        temp=temp->next;
    }
    nn->next=temp->next;
    temp->next=nn;
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
int main() {
    createList();
    displayList();
   
    addFirst();
    displayList();
   
    addLast();
    displayList();
    
    inBetween();
    displayList();
    return 0;
}

    