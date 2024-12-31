import java.util.*;
import java.util.Scanner;

class Employee{
    int id;
    String name;
    Scanner s1 = new Scanner(System.in);
    
    void accept()
    {
        System.out.printf("\nEnter Employee Id : ");
        id = s1.nextInt();
        System.out.print("Enter Employee Name : ");
        name = s1.next();
    }
    
    void display()
    {
        System.out.printf("\n");
        System.out.println("Employee Id is : "+id);
        System.out.println("Employee Name is : "+name);
    }
}

class Manager extends Employee{
    int salary;
    Scanner s2 = new Scanner(System.in);
    
    void accept()
    {
        super.accept();
        System.out.print("Enter Employee Salary : ");
        salary = s2.nextInt();
    }
    
    void display()
    {
        super.display();
        System.out.println("Employee Salary is : "+salary);
    }
}

public class EmployeeReferenceObject {
    
    public static void main(String[] args) {
        
        int n,i,ch;
        Scanner s = new Scanner(System.in);
        Employee e[];
        
        System.out.print("Enter How Many Employee Details You Want : ");
        n = s.nextInt();
        
        e = new Employee[n]; // Initilize the Array
        
        System.out.printf("\n\tEnter Details :\n");
        
        for(i=0;i<n;i++)
        {
           System.out.printf("\n\tPress 1 for Employee \n\tPress 2 for Manager\n");
           System.out.print("\nEnter Your Choice : ");
           ch = s.nextInt(); 
            
            if(ch==1)
            {
                e[i] = new Employee();
                e[i].accept();
            } 
            else if(ch==2) 
            {
                e[i] = new Manager();
                e[i].accept();
            } 
            else
            {
                System.out.printf("\nInvalid Choice Check Your Choice!\n");
                i--;
            }                
        }
        
        System.out.printf("\n\tYou Enter Details Are :\n");
        
        for(i=0;i<n;i++)
        {
            e[i].display();
        }
    }
    
}