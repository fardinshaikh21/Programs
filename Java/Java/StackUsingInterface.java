import java.util.*;

interface Stack{
    void Push(int n);
    void Pop();
    boolean isEmpty();
    boolean isFull();
    void Display();
}

class Operation implements Stack{
    int arr[];
    int size;
    int cap;
    
    Operation(int n){
        arr = new int[n];
        size = -1;
        cap = n;
    }
    
    public boolean isFull(){
        
        if(size==cap-1){
            return true;
        }
        else{
            return false;
        }
    }
    
    public boolean isEmpty(){
        if(size==-1){
            return true;
        }
        else{
            return false;
        }
    }
    
   public void Push(int n){
       
        if(!isFull()){
            arr[++size] = n;
        }
        else{
            System.out.println("Stack is Full");
        }
    }
    
    public void Pop(){
        
        if(!isEmpty()){
            System.out.print("Item is Poped : "+arr[size--]);
        }
        else{
            System.out.println("Stack is Empty ");
        }
    }
    
   public void Display(){
        
        if(size>-1){
            
            for(int i=0;i<=size;i++){
                System.out.print(arr[i]+" ");
            }
        }
        else{
            System.out.println("Stack is Empty");
        }
    }
    
}
public class StackUsingInterface {
    
    public static void main(String[] args) {
        
        int n;
        
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter Stack Size : ");
        n = s.nextInt();
        
        Operation o = new Operation(n);
        
        boolean fardin = true;
        
        while(fardin==true){
            
             System.out.println();
             System.out.println("Press 1 : Push Element : ");
             System.out.println("Press 2 : Pop Element : ");
             System.out.println("Press 3 : Check isFull : ");
             System.out.println("Press 4 : Check isEmpty : ");
             System.out.println("Press 5 : Display Stack : ");
             System.out.println("Press 6 : Exit : ");
             System.out.printf("\n\tEnter Your Choise : ");
             int ch = s.nextInt();
            
            switch(ch){
                
                case 1:
                System.out.print("Enter Stack Element : ");
                int n1 = s.nextInt();
                o.Push(n1);
                break;
                
                case 2:
                o.Pop();
                break;
                
                case 3:
                System.out.println(o.isFull());
                break;
                
                case 4:
                System.out.println(o.isEmpty());
                break;
                
                case 5:
                o.Display();
                break;
                
                case 6:
                fardin = false;
                break;
                
                default:
                System.out.println("Invalid Choise!");
            }
        }
    }
    
}