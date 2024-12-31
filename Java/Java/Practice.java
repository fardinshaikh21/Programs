/*import java.util.*;

public class Practice {
    
    public static void main(String[] args) {
        
        int a[] = {1,2 ,3, 4,5};
        int i,sum = 0;   
        
        for(i=0;i<a.length;i++){
            sum += a[i];
        }
        
        System.out.println("Addition is : "+sum);
    }
    
}*/

/*
import java.util.*;

class Product{
    int id;
    String name;
    int price;
    
    Product(int id,String name,int price){
        this.id = id;
        this.name = name;
        this.price = price;
    }
    
    void Display(){
        System.out.println("Product Id is : "+this.id);
        System.out.println("Product Name is : "+this.name);
        System.out.println("Product Price is : "+this.price);
    }
}
public class Practice {
    
    public static void main(String[] args) {
        
        int n,i,id;
        String name;
        int price;
        
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter How Many Product : ");
        n = s.nextInt();
        
        System.out.print("\n\tEnter Product Details : \n");
        
        Product []p = new Product[n];
        
        for(i=0;i<n;i++){
            System.out.println();
            System.out.print("Enter Product Id : ");
            id = s.nextInt();
            System.out.print("Enter Product Name : ");
            name = s.next();
            System.out.print("Enter Product Price : ");
            price = s.nextInt();
            p[i] = new Product(id,name,price);
        }
        
        System.out.print("\n\tProduct Details is : \n\n");
        
        for(i=0;i<n;i++){
            p[i].Display();
            System.out.println();
        }
        
        int min = p[0].price;
        String product = p[0].name;
        
        for(i=1;i<n;i++){
            if(min > p[i].price){
                min = p[i].price;
                product = p[i].name;
            }
        }
        
        System.out.println("Product Name is : "+product);
        System.out.println("Minimum Price is : "+min);
        
    }
    
}*/

import java.util.*;

class NumError extends Exception{
    
    public String toString(){
        return "Number is 0";
    }
}


public class Practice {
    
    public static void main(String[] args) {
        
        int n;
        
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter the Number : ");
        n = s.nextInt();
        
        try{
            
            if(n<=0){
                throw new NumError();
            }
            else{
                 int i,fac = 1;
                
                  for(i=1;i<=n;i++){
                    fac *= i;
                }
                
                System.out.print("Factorial is : "+fac);
            }
        }
         catch (Exception e){
            System.out.println(e);
        }
    }
    
}
