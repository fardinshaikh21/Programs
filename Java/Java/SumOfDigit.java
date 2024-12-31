import java.util.*;


public class SumOfDigit {
    
    int sum(int n){
        
        if(n==0)
        {
            return 0;
        }
        else
        {
           n =  n % 10 + sum (n / 10);
        }
        
        return n;
    }
    
    public static void main(String[] args) {
        
        int n;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter the Number : ");
        n = s.nextInt();
        
        SumOfDigit sd = new SumOfDigit();
        
        System.out.print("Sum of Digit is : "+sd.sum(n));
    }
    
}