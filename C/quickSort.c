#include<stdio.h>

void swap(int *a,int *b)
{
  int t=*a;
      *a=*b;
      *b=t;
}

int partition(int a[],int low,int high)
{
   int pivot=a[high];
   int i=low-1;

   for(int j=low;j<=high-1;j++)
  {
     if(a[j]<pivot)
    {
       i++;
       swap(&a[i],&a[j]);
    } 
    else
    {
       swap(&a[i+1],&a[high]);
    }
    
    return i-1;
  }
}

void quickSort(int a[],int low,int high)
{
   if(low<high)
  {
   int pi=partition(a,low,high);
   quickSort(a,low,high-1);
   quickSort(a,low+1,high);
  }
}

void display(int a[],int n)
{
  int i;
 
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
}


int main()
{
   // int a[7]={8,4,9,44,89,1,22,10};
   //int n=sizeof(a)/sizeof(a[0]);
   
   int n,i,a[100];

  printf("Enter How Many Numbers you Want: ");
  scanf("%d",&n);  
  
  printf("\nEnter the Numbers: ");

  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  
  printf("\nThe Numbers Are:\n");
  for(i=0;i<n;i++)
  {
   printf("%d ",a[i]);
  }
    
    quickSort(a,0,n-1);
 
    printf("\n\nAfter Sorted Numbers are:\n");
  
    display(a,n);
    
    return 0;
}