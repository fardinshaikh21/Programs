import java.util.Scanner;

class Outer{
    
    private int id;
    String name;
    
    void o1()
    {
        System.out.print("\nThis is Outer Class");
        Inner i = new Inner();
        i.i1();
        System.out.print("\nThis is Outer Class");
    }
    
    class Inner{
        
        void i1()
        {
            id = 101;
            name = "Fardin";
            System.out.println("\nid : "+id);
            System.out.println("name : "+name);
            System.out.print("\nThis is Inner Class");
        }
        
    }
    
}

public class InnerClass {
    
    public static void main(String[] args) {
        
        Outer obj = new Outer();
        
        obj.o1();
    }
    
}