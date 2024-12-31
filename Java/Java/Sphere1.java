import java.util.*;
import java.util.Scanner;

abstract class Shape{
    abstract void Area();
    abstract void Volume();
}

class Sphere extends Shape{
    int radius;
    
    Sphere(int radius)
    {
        this.radius = radius;
    }
    
    void Area()
    {
        System.out.print("Area of Sphere is : "+4*3.14*this.radius*this.radius);
    }
    
    void Volume()
    {
        System.out.print("\nVolume of Sphere is : "+4*3.14*(this.radius*this.radius*this.radius)/3);
    }
}
public class Sphere1 {
    
    public static void main(String[] args) {
        
        int n;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter the Radius : ");
        n = s.nextInt();
        
        Sphere s1 = new Sphere(n);
        
        s1.Area();
        s1.Volume();
    }
    
}