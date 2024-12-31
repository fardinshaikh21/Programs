import java.util.*;
import java.util.Scanner;

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

public class Std {
    
    public static void main(String[] args) {
        
        int i,n,r;
        String name;
        float per;
        
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter How Many Student Details You Want : ");
        n = s.nextInt();
        
        Student s1[] = new Student[n];
        
        System.out.printf("\n\tEnter Student Details :\n");
        
        for(i=0;i<s1.length;i++)
        {
            System.out.printf("Enter Student Roll no : ");
            r = s.nextInt();
            System.out.print("Enter Student Name : ");
            name = s.next();
            System.out.print("Enter Student Percentage : ");
            per = s.nextFloat();
            System.out.printf("\n");
            
            s1[i] = new Student(r,name,per);
            
        }
        
        System.out.printf("\n\tStudent Details are : \n\n ");
        
        for(i=0;i<s1.length;i++)
        {
            s1[i].display();
        }
    }
    
}