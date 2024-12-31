import java.util.Scanner;
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

class PurchaseOrder extends Order{
    String Cname;
    
    PurchaseOrder(int id,String des,String Cname){
        super(id,des);
        this.Cname = Cname;
    }
    
    void Display(){
        System.out.println("\n\nOrder Id is : "+this.id);
        System.out.println("Order Description is : "+this.des);
        System.out.println("Customer Name is : "+this.Cname);
    }
}

public class Orders {
    
    public static void main(String[] args) {
        int n,i;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter How Many Orders You Want : ");
        n = s.nextInt();
        
        
        PurchaseOrder p[] = new PurchaseOrder[n];
        
        System.out.printf("\n\t Enter Order Details : \n\n");
        
        for(i=0;i<n;i++)
        {
            System.out.print("Enter Order Id : ");
            int id = s.nextInt();
            System.out.print("Enter Order Description : ");
            String des = s.next();
            System.out.print("Enter Customer Name : ");
            String Cname = s.next();
            
            p[i] = new PurchaseOrder(id,des,Cname);
        }
        
        for(i=0;i<n;i++)
        {
            p[i].Display();
        }
        
    }
    
}