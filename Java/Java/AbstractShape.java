import java.util.*;

abstract class Shape{
    
    abstract double Area();
    abstract double Volume();
    int a = 10;
}

class Sphere extends Shape{
    
    int radius;
    Scanner s = new Scanner(System.in);
    
    void Accept(){
        System.out.print("Enter Sphere Radius : ");
        radius = s.nextInt();
    }
    
    double Area(){
        
        return 4 * 3.14 * radius * radius;
    }
    
    double Volume(){
        
        return (4 * 3.14 * radius * radius * radius) / 3;
    }
}
public class AbstractShape {
    
    public static void main(String[] args) {
        
        Sphere s = new Sphere();
        
        s.Accept();
        System.out.println("Area of Sphere is "+s.Area());
        System.out.print("Volume of Sphere is : "+s.Volume());
    }
    
}