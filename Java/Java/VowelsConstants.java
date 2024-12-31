import java.util.*;

public class VowelsConstants {
    
    public static void main(String[] args) {
        
        char ch;
        
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter the Character : ");
        ch = s.next().charAt(0);
        
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            System.out.print("Vowels");
        }
        else{
            System.out.print("Constant");
        }
    }
    
}