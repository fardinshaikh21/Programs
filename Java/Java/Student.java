import java.util.Scanner;
import java.util.*;

class RnoException extends Exception
{
    public String toString()
    {
        return "Rollno is not Within Range 13001 to 13080";
    }
}

public class Student {
    
    public static void main(String[] args) {
        
        int rno,age;
        String name,course;
        
        Scanner s = new Scanner(System.in);
        
       /* System.out.print("Enter Student Roll No : ");
        rno = s.nextInt();
        System.out.print("Enter Student Name : ");
        name = s.next();
        System.out.print("Enter Student Age : ");
        age = s.nextInt();
        System.out.print("Enter Student Course : ");
        course = s.next();*/
        
        try
        {
            System.out.print("Enter Student Roll No : ");
        rno = s.nextInt();
        System.out.print("Enter Student Name : ");
        name = s.next();
        System.out.print("Enter Student Age : ");
        age = s.nextInt();
        System.out.print("Enter Student Course : ");
        course = s.next();
        
            if(rno<13001 || rno>13080)
            {
                throw new RnoException();
            }
            else
            {
                System.out.println("Student Roll No is : "+rno);
                System.out.println("Student Name is : "+name);
                System.out.println("Student Age is : "+age);
                System.out.println("Student Course is : "+course);
            }                
        }
        catch (RnoException r)
        {
            System.out.print(r);
        }
        
    }
    
}
/*

import java.util.*;

 class Nizam extends Exception {
    
         void Dis() {
        System.out.print("Age not Between 15 to 21");
    }
}
 

class Student {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        System.out.print("Enter Name:");
        String name = s.next();
        System.out.print("Enter Roll no:");
        int roll = s.nextInt();
        System.out.print("Enter Age:");
        int age = s.nextInt();  
        System.out.print("Enter Course:");
        String crs = s.next();  

        try {
            if (age < 15 || age > 21) {  
                throw new Nizam();
            } else {
                System.out.print("Name:" + name);
                System.out.print("\nRoll no:" + roll);
                System.out.print("\nAge:" + age);
                System.out.print("\nCourse:" + crs);
            }
        } catch (Nizam obj) {
            obj.Dis();  
        }
    }
}*/