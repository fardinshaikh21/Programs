import java.util.*;
import java.util.Scanner;

public class Name {
    
    public static void main(String[] args) {
        String name;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter the Name : ");
        name = s.next();
        
        System.out.println("\"Hello, "+name.toUpperCase()+", nice to meet you!\".");
    }
    
}