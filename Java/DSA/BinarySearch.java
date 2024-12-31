import java.util.*;

class BinarySearch{
    public static void main(String []args){
       
        Scanner s = new Scanner(System.in);

        System.out.print("Enter How Many Number You Want : ");
        int n = s.nextInt();

        int []arr = new int[n];
        int i,j,temp;
        
        System.out.println("\n\tEnter array Elements : \n");

        for(i=0;i<n;i++){
            System.out.print("Enter "+(i+1)+" Number : ");
            int num = s.nextInt();
            arr[i] = num;
        }

       System.out.print("\n\tArray Elents are : \n");

       for(i=0;i<n;i++){
        System.out.print(arr[i]+" ");
       }


       for(i=0;i<n;i++){
         for(j=1;j<n;j++){
           
            if(arr[j]<arr[j-1]){
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
         }
       }  

       System.out.print("\n\n\tSorted Array Elents are : \n");

       for(i=0;i<n;i++){
        System.out.print(arr[i]+" ");
       }   

    }
}