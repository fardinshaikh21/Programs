import java.util.*;

class Age extends Exception{
    
    public String toString(){
        return "Age not Within the Range Between 15 to 21";
    }
}

class Student{
    int rno,age;
    String name,course;
    
    Student(int rno,String name,int age,String course){
        this.rno = rno;
        this.name = name;
        this.age = age;
        this.course = course;
    }
    
    void Display(){
        System.out.println();
        System.out.println("Student Roll no is : "+this.rno);
        System.out.println("Student Name is : "+this.name);
        System.out.println("Student Age is : "+this.age);
        System.out.println("Student Course is : "+this.course);
    }
}

public class ExceptionStudent {
    
    public static void main(String[] args) {
        
        int rno,age;
        String name,course;
        
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter Student Roll no : ");
        rno = s.nextInt();
        System.out.print("Enter Student Name : ");
        name = s.next();
        System.out.print("Enter Student Age : ");
        age = s.nextInt();
        System.out.print("Enter Student Course : ");
        course = s.next();
        
        Student s1 = new Student(rno,name,age,course);
        
        try{
            
            if(age < 15 || age > 21){
               throw new Age();
            }
             s1.Display();
        }
        catch(Age a){
            System.out.print(a);
        }
        
        
    }
    
}