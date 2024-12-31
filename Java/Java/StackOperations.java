import java.util.*;

interface Stack{
    boolean isEmpty();
    boolean isFull();
    void Push(int n2);
    void Pop();
    void Display();
}

class Operations implements Stack{
    int array[];
    int cap;
    int size;
    
    Operations(int n)
    {
        cap = n;
        size = -1;
        array = new int[n];
    }
    
    public boolean isFull()
    {
        if(size==cap-1)
        {
            return true;
        }  
        return false;        
    }
    
    public boolean isEmpty()
    {
        if(size==-1) 
        {
            return true;
        }
        return false;
    }
    
    public void Push(int n2)
    {
        if(!isFull())
        {
            array[++size] = n2;
        }
        else
        {
            System.out.println("Stack is Full");
        }
    }
    
    public void Pop()
    {
        if(!isEmpty())
        {
            System.out.println("Item is Poped : "+array[size--]);
        }
        else
        {
            System.out.println("Stack is Empty");
        }
    }
    
    public void Display()
    {
        if(size>-1)
        {   
            
           for(int i=0;i<=size;i++)
          {
            System.out.print(array[i]+" ");
          }
        }
        else
        {
            System.out.println("Stack is Empty ");
        }            
    }
    
}

class StackOperations {
    
    public static void main(String args[]){
        
        int n;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter Stack Size : ");
        n = s.nextInt();
        
        Operations o = new Operations(n);
        
        boolean flag = true ;
        
        while(flag==true)
        {
            System.out.printf("\nPress 1 to Push\nPress 2 to Pop\nPress 3 to isFull\nPress 4 to isEmpty\nPress 5 to Display Stack \nPrees 6 to Exit\n\n");
            System.out.print("Enter Your Choise : ");
            int ch = s.nextInt();
            
           switch(ch)
          {
              case 1:
              System.out.print("Enter Stack Element : ");
              int item = s.nextInt();
              o.Push(item);
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
              flag = false;
              break;
              
              default : 
              System.out.print("Invalid Choise plz Check Your Choise ");
              
          }
            
        }
        
    }
    
}