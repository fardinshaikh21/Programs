import java.util.*;
import java.util.Scanner;

class Rno extends Exception
{
    public String toString()
    {
        return "Roll is Not between 13001 to 13080 ";
    }
}

class Student{
    int rno;
    String name;
    float per;
    
    Student(int rno,String name,float per)
    {
        this.rno = rno;
        this.name = name;
        this.per = per;
    }
    
    void display()
    {
        System.out.println("Student Roll no is : "+this.rno);
        System.out.println("Student Name is : "+this.name);
        System.out.println("Student Percentage is : "+this.per);
        System.out.printf("\n");
    }
}

public class StudentRnoException {
    
    public static void main(String[] args) {
        
        
        Scanner s = new Scanner(System.in);
        
        try{
             
          System.out.print("Enter Student Roll no : ");  
          int rno = s.nextInt();
          System.out.print("Enter Student Name : ");  
          String name = s.next();
          System.out.print("Enter Student Percentage : ");  
          float per = s.nextFloat();
            
            Student s1 = new Student(rno,name,per);
            
            if(rno<13001 || rno>13080)
            {
                throw new Rno();
            }
            else
            {
                s1.display();
            }
        }
        catch (Rno r)
        {
            System.out.println(r);
        }
    }
    
}