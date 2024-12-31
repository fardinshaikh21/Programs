import java.util.*;

class Person{
    
    int pid,age;
    String pname,gender;
    
    Person(int pid,String pname,int age,String gender){
        
        this.pid = pid;
        this.pname = pname;
        this.age = age;
        this.gender = gender;
    }
    
   public String toString(){
        
        return this.pid+this.pname+this.age+this.gender;
    }
    
}
public class PersonDetails {
    
    public static void main(String[] args) {
        
        int n,i,id,age;
        String name,gender;
        
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter How Many Person Details You Want : ");
        n = s.nextInt();
        
        Person p[] = new Person[n];
        
        System.out.printf("\n\tEnter Person Details :\n");
        
        for (i=0;i<p.length;i++){
            
            System.out.print("\nEnter Person Id : ");
            id = s.nextInt();
            System.out.print("Enter Person Name : ");
            name = s.next();
            System.out.print("Enter Person Age : ");
            age = s.nextInt();
            System.out.print("Enter Person Gender : ");
            gender = s.next();
            
            p[i] = new Person(id,name,age,gender);
        }
        
        System.out.printf("\n\tPerson Details are :\n");
        
        for (i=0;i<p.length;i++){
              
            System.out.println();
            System.out.println("Person Id is : "+p[i].pid);
            System.out.println("Person Name is : "+p[i].pname);
            System.out.println("Person Age is : "+p[i].age);
            System.out.println("Person Gender is : "+p[i].gender);
        
        }
        
       
        
    }
    
}