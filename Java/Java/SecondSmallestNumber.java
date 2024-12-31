import java.util.*;

public class SecondSmallestNumber {
    
    public static void main(String[] args) {
        
        int arr[] = {10,2,4,1,9};
        int i;
        
      //  Arrays.sort(arr);
        
        for (i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        
        int first = arr[0];
        int second = arr[0];
        
        for (i=1;i<arr.length;i++){
            
            if(first > arr[i]){
                second = first;
                first = arr[i];
            }
            else if(second > arr[i] && first != arr[i]){
                second = arr[i];
            }
        }
        
        System.out.println("\nFirst Minimum Number is : "+first);
        System.out.println("Second Minimum Number is : "+second);
    }
    
}