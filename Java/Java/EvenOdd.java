import java.util.Scanner;
import java.util.*;

public class EvenOdd {
    
    public static void main(String[] args){
        
        int n,i;
        
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter How Many Array Elements You Want : ");
        n = s.nextInt();
        
        int array[] = new int[n];
        
        System.out.printf("\n\tEnter Array Elements : \n");
        
        for(i=0;i<n;i++)
        {
            array[i] = s.nextInt();
        }
        
        System.out.printf("\n\tArray Elements are : \n");
        
         for(i=0;i<n;i++)
        {
            System.out.print(array[i]+" ");
        }
        
        int even[];
        int odd[];
        int ecount=0;
        int ocount=0;
        
        for(i=0;i<n;i++)
        {
            if(array[i]%2==0)
            {
                even[i] = array[i];
                ecount++;
            }
            else
            {
                odd[i] = array[i];
                ocount++;
            }
        }
        
        
        
        
    }
    
}