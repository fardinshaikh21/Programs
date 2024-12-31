import java.util.Scanner;
import java.util.*;

class AgeException extends Exception
{
    public String toString()
    {
        return "Age is not Within Range 15 to 21";
    }
}
public class StudentAgeException {
    
    public static void main(String[] args) {
        
        int rno,age;
        String name,course;
        
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter Student Roll No : ");
        rno = s.nextInt();
        System.out.print("Enter Student Name : ");
        name = s.next();
        System.out.print("Enter Student Age : ");
        age = s.nextInt();
        System.out.print("Enter Student Course : ");
        course = s.next();
        
        try
        {
            if(age<15 || age>21)
            {
                throw new AgeException();
            }
            else
            {
                System.out.println("Student Roll No is : "+rno);
                System.out.println("Student Name is : "+name);
                System.out.println("Student Age is : "+age);
                System.out.println("Student Course is : "+course);
            }                
        }
        catch (AgeException r)
        {
            System.out.print(r);
        }
    }
    
}