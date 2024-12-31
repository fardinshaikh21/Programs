import java.util.*;
import java.util.Scanner;

public class ExampleThrow {
    
    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter Your Age : ");
        int age = s.nextInt();
        
        try{
            
            if(age<18){
                throw new Exception("You Can't Vote!");
            }
            else{
                System.out.println("You Can Vote.");
            }
        }catch (Exception e){
            System.out.print(e);
        }
    }
    
}