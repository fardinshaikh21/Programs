import java.util.*;

abstract class Order{
    int id;
    String des;
    
    Order(int id,String des){
        this.id = id;
        this.des = des;
    }
    
    abstract void Display();
}

class Purchase extends Order{
    String name;
    
    Purchase(int id,String des,String name){
        super(id,des);
        this.name = name;
    }
    
    void Display(){
        System.out.println();
        System.out.println("Order Id is : "+id);
        System.out.println("Order Name is : "+name);
        System.out.println("Order Description is : "+des);
    }
}

public class AbstractOrder {
    
    public static void main(String[] args) {
        
        int n,i;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter How Many Order : ");
        n = s.nextInt();
        
        
        Purchase p[] = new Purchase[n];
        
        System.out.printf("\n\tEnter Order Details :\n");
        
        for(i=0;i<p.length;i++){
            
            System.out.println();
            System.out.print("Enter Order Id : ");
            int id = s.nextInt();
            System.out.print("Enter Order Description : ");
            String des = s.next();
            System.out.print("Enter Order Name : ");
            String name = s.next();
            
            p[i] = new Purchase(id,des,name);
        }
        
        System.out.printf("\n\tOrder Details are :\n");
        
        for(i=0;i<p.length;i++){
            
            p[i].Display();
        }
    }
    
}