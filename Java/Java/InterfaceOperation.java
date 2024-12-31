import java.util.*;

interface Operation{
    double Area();
    double Volume();
    final double pi = 3.141;
}

class Circle implements Operation{
    
    int radius;
    Scanner s = new Scanner(System.in);
    
    void Accept(){
        System.out.print("Enter Circle Radius : ");
        radius = s.nextInt();
    }
    
    public double Area(){
        return  pi * radius * radius;
    }
    
    public double Volume(){
        return (4 * pi * radius * radius * radius)/3;
    }
}
public class InterfaceOperation {
    
    public static void main(String[] args) {
        
        Circle o = new Circle();
        
        o.Accept();
        System.out.println("Area of Circle is : "+o.Area());
        System.out.println("Volume of Circle is : "+o.Volume());
        
    }
    
}