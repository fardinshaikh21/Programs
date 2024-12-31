import java.util.*;

class AgeException extends Exception{
    
    public String toString(){
        return "Age is Not Within range 15 to 21";
    }
}

class Student{
    
    int rno,age;
    String name,sub;
    
    Student(int rno,String name,int age,String sub)throws AgeException{
        this.rno = rno;
        this.name = name;
        this.age = age;
        
        if(age<15 || age>21){
            throw new AgeException();
        }
        
        this.sub = sub;
    }
    
    void Display(){
        System.out.println("Student Roll no is : "+rno);
        System.out.println("Student Name is : "+name);
        System.out.println("Student Age is : "+age);
        System.out.println("Student Subject is : "+sub);
    }
    
}
public class AgeException1 {
    
    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);
        
        try{
            
            System.out.print("Enter Student Roll no : ");
            int rno = s.nextInt();
            System.out.print("Enter Student Name : ");
            String name = s.next();
            System.out.print("Enter Student Age : ");
            int age = s.nextInt();
            System.out.print("Enter Student Subject : ");
            String sub = s.next();
            
            Student s1 = new Student(rno,name,age,sub);
            
            s1.Display();
        }
        catch(AgeException a){
            System.out.println(a);
        }
    }
    
}