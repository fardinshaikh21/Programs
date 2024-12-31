import java.util.Scanner;
import java.util.*;

public class ArrayElementsSum {
    
    public static void main(String[] args) {
        
        int n,i,sum=0;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter How Many Array Elements You Want : ");
        n = s.nextInt();
        
        int array[] = new int[n];
        
        System.out.print("\n\tEnter Array Elements : \n\n");
        
        for(i=0;i<array.length;i++)
        {
            array[i] = s.nextInt();
        }
        
        System.out.print("\n\tArray Elements are : \n\n");
        
        for(i=0;i<array.length;i++)
        {
            System.out.print(array[i]+" ");
            sum += array[i];
        }
        
        System.out.print("\n\nTotal Array Elements Sum is : "+sum);
        
    }
    
}