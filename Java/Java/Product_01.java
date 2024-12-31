import java.util.*;

class Product{
    int id;
    String name;
    float price;
    Scanner s = new Scanner(System.in);
    
    void Accept(){
        System.out.println();
        System.out.print("Enter Product Id : ");
        id = s.nextInt();
        System.out.print("Enter Product Name : ");
        name = s.next();
        System.out.print("Enter Product Price : ");
        price = s.nextFloat();
    }
    
    void Display(){
        System.out.println();
        System.out.println("Product Id is : "+id);
        System.out.println("Product Name is : "+name);
        System.out.println("Product Price is : "+price);
        
    }
}

public class Product_01 {
    
    public static void main(String[] args) {
        
        int n,i;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter How Many Produnct You Want : ");
        n = s.nextInt();
        
        System.out.printf("\n\tEnter Product Details :\n");
        
        Product p[] = new Product[n];
        
        
        for(i=0;i<p.length;i++){
            p[i] = new Product();
            p[i].Accept();
        }
        
        System.out.printf("\n\tProduct Details are :\n");
        
        
        for(i=0;i<p.length;i++){
            p[i].Display();
        }
        
        float min = p[0].price;
        String name = p[0].name;
        
        for(i=1;i<p.length;i++){
            
            if(min > p[i].price){
                min = p[i].price;
                name = p[i].name;
            }
        }
        
        System.out.print("\n\nMinimum Product Price is : "+min);
        System.out.print("\nProduct Name is : "+name);
    }
    
}