class Exam{
    
    static int count=0;
    
    static void Display(){
        count++;
        System.out.println("Total Object is : "+count);
    }
    
}
public class StaticExample {
    
    public static void main(String[] args) {
        
        Exam e1 = new Exam();
       // Exam e2 = new Exam();
      //  Exam e3 = new Exam();
        
        e1.Display();
        e1.Display();
        e1.Display();
    }
    
}