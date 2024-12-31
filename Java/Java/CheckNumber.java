import java.util.Scanner;
import java.util.*;

class MyNumber
{
    private int n;
    
    MyNumber()
    {
        n = 0;
    }
    
    MyNumber(int n)
    {
        this.n = n;
    }
    
    boolean isNegative()
    {
        if(n<0)
        {
            return true;
        } 
        return false;        
    }
    
    boolean isPositive()
    {
        if(n>0)
        {
            return true;
        } 
        return false;  
    }
    
    boolean isEven()
    {
        if(n%2==0)
        {
            return true;
        }  
        return false;        
    }
    
    boolean isOdd()
    {
        if(n%2!=0)
        {
            return true;
        }  
        return false; 
    }
    
    
}
public class CheckNumber {
    
    public static void main(String[] args) {
        
        int n;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter the Number : ");
        n = s.nextInt();
        
        MyNumber m = new MyNumber(n);
        
        System.out.println("");
        System.out.println(n+" this Number is Negative : "+m.isNegative());
        System.out.println(n+" this Number is Positive : "+m.isPositive());
        System.out.println(n+" this Number is Even : "+m.isEven());
        System.out.println(n+" this Number is Odd : "+m.isOdd());
        
        
    }
    
}