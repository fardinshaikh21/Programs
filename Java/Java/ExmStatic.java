
public class ExmStatic {
    
    static int count;
    
    void increment(){
        System.out.println("No of Object ");
        count++;
    }
    
    void display(){
        System.out.println("Total No of Object is : "+count);
    }
    
    public static void main(String[] args) {
        
        ExmStatic e1 = new ExmStatic();
       // ExmStatic e2 = new ExmStatic();
       // ExmStatic e3 = new ExmStatic();
        
        e1.increment();
        e1.increment();
        e1.increment();
        
        e1.display();
        /*
        ExmStatic e1 = new ExmStatic();
        
        e1.increment();
        e1.increment();
        e1.increment();
        
        e1.display();*/
    }
    
}