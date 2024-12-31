class myclass{
    
    private int n;
    
    myclass()
    {
        n = 0;
    }
    
    myclass(int n)
    {
        this.n = n;
    }
    
    boolean isPositive(){
        
        if(this.n>0)
        {
            return true;
        }
        else
        {
            return false;
        }
     }
    
     boolean isNegative(){
        
        if(this.n<0)
        {
            return true;
        }
        else
        {
            return false;
        }
     }
    
      boolean isEven(){
          if(this.n % 2==0)
          {
              return true;
          }
          else
          {
              return false;
          }
      }
    
      boolean isOdd(){
          
          if(this.n % 2 != 0)
          {
              return true;
          }
          else
          {
             return false; 
          }
      }
    
}
public class MYNUMBER {
    
    public static void main(String[] args) {
        
       // int n ;
       // n = Integer.parseInt(args[0]);
        myclass m = new myclass(-4);
        
        System.out.println("Number is Positive : "+m.isPositive());
        System.out.println("Number is Negative : "+m.isNegative());
        System.out.println("Number is Even : "+m.isEven());
        System.out.println("Number is Odd : "+m.isOdd());
    }
    
}