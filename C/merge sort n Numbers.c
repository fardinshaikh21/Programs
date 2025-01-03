#include <stdio.h>
#include<stdlib.h>


//int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 9 };

void merging(int a[],int low, int mid, int high) {
    int i, j, k;
    int b[100];

    for(i = low, j = mid + 1, k = low; i<= mid && j<= high; k++) 
   {
        if(a[i] <= a[j])
            b[k] = a[i++];
        else
            b[k] = a[j++];
    }

    while(i <= mid)
        b[k++] = a[i++];

    while(j <= high)
        b[k++] = a[j++];

    for(k= low; k <= high; k++)
        a[k] = b[k];
}

void sort(int a[],int low, int high) 
{
    int mid;

    if(low < high) 
    {
        mid = (low + high) / 2;
        sort(a,low, mid);
        sort(a,mid+1, high);
        merging(a,low, mid, high);
    } 
     else 
    {
        return;
    }
}

  int main()
 {
    int n,i,a[100];
 
 printf("Enter the number you want: ");
 scanf("%d",&n);

 printf("\nEnter the numbers: ");

 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 
 printf("\nthe Numbers are: ");

 for(i=0;i<n;i++)
 {
   printf("%d ",a[i]);
 }



     sort(a,0,n-1);

    printf("\nList after sorting\n");

    for(i = 0; i <n; i++)
    {
        printf("%d ", a[i]);
    }
}