import java.util.Scanner;

interface Operation1
{
    double area();
    double volume();
    final double Pi = 3.141;
}

class Circle implements Operation1
{
    float radius;
    
    Circle(float radius)
    {
        this.radius = radius;
    }
    
    public double area()
    {
        return Pi * this.radius * this.radius;
    }
    
    public double volume()
    {
        return ( 4 * Pi * this.radius * this.radius * this.radius) / 3;
    }
}

class Operation {
    public static void main(String [] args){
        
        float r;
        
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter Circle Radius : ");
        r = s.nextFloat();
        
        Circle c = new Circle(r);
        
        System.out.println("Area of Circle is : "+c.area());
        System.out.println("Volume of Circle is : "+c.volume());
        
    }
}