import java.util.Scanner;

public class PerfectNumber {
    
    public static void main(String[] args) {
        
        int n,i,sum;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter the Number : ");
        n = s.nextInt();
        
        i = 1;
        sum = 0;
        
        while(i<n)
        {
            if(n%i==0)
            {
                sum += i;
            } 
              i++;            
        }  
        
        if(sum==n) 
        {
            System.out.print(n+" this Number is Perfect Number");
        }  
        else
        {
            System.out.print(n+" this Number is Not Perfect Number");
        }            
        
        
    }
    
}