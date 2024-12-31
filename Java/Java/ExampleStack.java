import java.util.*;

class Operation{
    
    String name;
    static int count = 0;
    
    Operation(String name){
        this.name = name;
        count++;
    }
    
    void Display(){
        System.out.println("Student Name is : "+this.name);
    }
    
    static void num_of_student(){
        System.out.println("No of Student is : "+count);
    }
    
}
public class ExampleStack {
    
    public static void main(String []arg){
        
        String name;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter Student Name : ");
        name = s.next();
        
        Operation o1 = new Operation(name);
        Operation o2 = new Operation(name);
        Operation o3 = new Operation(name);
        
        o1.num_of_student();
        
    }
    
}