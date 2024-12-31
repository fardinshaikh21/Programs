import java.util.Scanner;
import java.util.*;

class Employee{
    String name;
    double  salary;
    
    Employee(String name,double salary)
    {
        this.name = name;
        this.salary = salary;
    }
    
    void display()
    {    
        System.out.println();
        System.out.println("Employee Name is : "+this.name);
        System.out.println("Employee Salary is : "+this.salary);
    }
    
}

class Developer extends Employee{
    String Pname;
    
    Developer(String name,double salary,String Pname)
    {
        super(name,salary);
        this.Pname = Pname;
    }
    
    void display()
    {
        super.display();
        System.out.println("Project Name is : "+this.Pname);
    }
}

public class Emp {
    
    public static void main(String[] args) {
        
        int n,i;
        Scanner s = new Scanner(System.in);
        
        System.out.print("How Many Employee Detail You Want : ");
        n = s.nextInt();
        
        Developer d[] = new Developer[n];
        
        System.out.printf("\n\tEnter Employee Details :\n\n");
        
        for(i=0;i<d.length;i++)
        {
            System.out.print("Enter Employee Name : ");
            String name = s.next();
            System.out.print("Enter Employee Salary : ");
            double salary = s.nextDouble();
            System.out.print("Enter Project Name : ");
            String Pname = s.next();
            
            d[i] = new Developer(name,salary,Pname);
        }
        
        System.out.printf("\n\tEmployee Details Are :\n\n");
        
        for(i=0;i<d.length;i++)
        {
            d[i].display();
        }
    }
    
}