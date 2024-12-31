import java.util.*;
import java.util.Scanner;

class Product1{
    int id;
    String name;
    float price;
    
    Product1(int id,String name,float price)
    {
        this.id = id;
        this.name = name;
        this.price = price;
    }
    
    void display()
    {
        System.out.println("\nProduct id is : "+id);
        System.out.println("Product Name is : "+name);
        System.out.println("Product Price is : "+price);
    }
}

public class Product {
    
    public static void main(String[] args) {
        
        int n,i,pid;
        String pname;
        float pprice;
        
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter How Many Product Details You Want : ");
        n = s.nextInt();
        
        Product1 p[] = new Product1[n];
        
        System.out.printf("\n\tEnter Product Details : \n\n");
        
        for(i=0;i<n;i++)
        {
            System.out.print("Enter Product Id : ");
            pid = s.nextInt();
            System.out.print("Enter Product Name : ");
            pname = s.next();
            System.out.print("Enter Product Price : ");
            pprice = s.nextFloat();
            p[i] = new Product1(pid,pname,pprice);
        }
        
        System.out.printf("\n\n\tProduct Details are :\n\n");
        
        for(i=0;i<n;i++)
        {
            p[i].display();
        }
        
       int ids = p[0].id;
       String  names = p[0].name;
       float  min = p[0].price;
        
        for(i=1;i<n;i++)
        {
            if(min>p[i].price)
            {
                ids = p[i].id;
                names = p[i].name;
                min = p[i].price;
            }    
        }
        
        
        System.out.print("\n\n\tMimimum Product Price Details are :\n\n");
        
        System.out.println("Product id is : "+ids);
        System.out.println("Product Name is : "+names);
        System.out.println("Product Price is : "+min);
        
        
    }
    
}