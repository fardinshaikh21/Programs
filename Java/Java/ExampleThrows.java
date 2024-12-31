import java.util.*;

public class ExampleThrows {
    
    void div() throws ArithmeticException{
        
        Scanner s = new Scanner(System.in);
       // System.out.print("Enter the Number : ");
        //int n = s.nextInt();
        
        try{
            
            if(){
                throw new ArithmeticException("Not Divide By Zero!");
            }else{
                System.out.println("Division is : ");
            }
        }catch (ArithmeticException e){
            System.out.print(e);
        }   
        }
    
    public static void main(String[] args) {
        
        ExampleThrows e = new ExampleThrows();
        
        e.div();
    }
    
}