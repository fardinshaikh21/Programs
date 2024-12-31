import java.util.*;
import java.util.Scanner;

class facException extends Exception
{
    public String toString()
    {
        return "Number is Zero(0) ";
    }
}

class FactorialException{
    
    public static void main(String args[]){
        
        int n,i=1,fac=1;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter the Number : ");
        n = s.nextInt();
        
        try{
            
            if(n==0)
            {
               throw new facException();
            }
            else
            {
                while(i<=n)
                {
                    fac *= i;
                    i++;
                } 
                
                 System.out.print(n+" this Number Factorial is : "+fac);                
            }    
        }
        catch(facException f)
        {
            System.out.print(f);
        }
    }
}