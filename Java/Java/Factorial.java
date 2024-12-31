import java.util.Scanner;

public class Factorial{
    public static void main(String args[]){
        
        int n,i,fac=1;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter the Number : ");
        n = s.nextInt();
        
        i = 1;
        
        while(i<=n)
        {
            fac *= i;
            i++;
        }  
        
        System.out.print("Factorial is : "+fac);     
    }
}