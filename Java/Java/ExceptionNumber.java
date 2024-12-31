import java.util.*;

class Number extends Exception{
    
     public String toString(){
        return "Number is Zero";
    }
}

class Factorial{
    
    int i,n ;
    
    Factorial(int n){
        this.n = n;
    }
    
    void Check(){
        
        try{
            
            if(this.n==0){
                throw new Number();
            }
            else{
                int fac = 1;
                for(i=1;i<=this.n;i++){
                    
                    fac *= i;
                }
                
                System.out.print("Factorial is : "+fac);
            }
        }
        catch(Number e){
            System.out.print(e);
        }
        
    }
}
public class ExceptionNumber {
    
    public static void main(String[] args) {
        
        int num;
        
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter the Number : ");
        num = s.nextInt();
        
        Factorial n = new Factorial(num);
        
        n.Check();
    }
    
}