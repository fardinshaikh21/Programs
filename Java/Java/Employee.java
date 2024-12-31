import java.util.Scanner;

class Employee1{
    
    String name;
    int salary;
    
    Employee1(String name,int salary)
    {
       this.name = name;
       this.salary = salary;        
    }
    
    void display()
    {
        System.out.println("Employee Name is : "+this.name);
        System.out.println("Employee Salary is : "+this.salary);
    }
}

class Developer extends Employee1{
    
    String project;
    
    Developer(String name,int salary,String project)
    {
        super(name,salary);
        this.project = project;
    }
    
    void display()
    {
        super.display();
        System.out.println("Employee Project Name is : "+this.project);
    }
}

public class Employee{
    public static void main(String args[]){
        
        String n,p;
        int sal;
        
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter Employee Name : ");
        n = s.next();
        System.out.print("Enter Employee Salary : ");
        sal = s.nextInt();
        System.out.print("Enter Employee Project Name : ");
        p = s.next();
        
        Developer d = new Developer(n,sal,p);
        d.display();
        
    }
}