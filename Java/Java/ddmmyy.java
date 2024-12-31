import java.util.*;
import java.util.Scanner;

class DateException extends Exception
{
    public String toString()
    {
        return "\nInvalid Date Exception Plz Check Your Date!\n";
    }
}

class MonthException extends Exception
{
    public String toString()
    {
        return "\nInvalid Month Exception Plz Check Your Month!\n";
    }
}

class MyDate{
    int dd,mm,yy;
    Scanner s = new Scanner(System.in);
    
    void Accept()
    {
        System.out.printf("\tEnter dd/mm/yyyy This Format \n\n");
        System.out.print("Enter Date : ");
        dd = s.nextInt();
        System.out.print("Enter Month : ");
        mm = s.nextInt();
        System.out.print("Enter Year : ");
        yy = s.nextInt();
    }
    
    void Display()
    {
        System.out.printf("\n\nDate is : %d/%d/%d",dd,mm,yy);
    }
}

public class ddmmyy {
    
    public static void main(String[] args) {
        
        
        MyDate m = new MyDate();
        
     //   m.Accept();
        
       /* try
        {
            
          if(m.mm<1 || m.mm>12)
         {
            throw new MonthException();
         }  
        }
        catch (MonthException m1) 
        {
            System.out.print(m1);
        }*/        
        
        try
        {
            m.Accept();
            
            if(m.mm<1 || m.mm>12)
            {
                throw new MonthException();
            }    
            
            switch(m.mm) 
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8: 
                case 10:
                case 12:
                
                if(m.dd<1 || m.dd>31)
                {
                    throw new DateException();
                }
                break;
                
                case 2:
                if(m.dd<1 || m.dd>28)
                 {
                     throw new DateException();
                 }
                break;
                
                case 4:
                case 6:
                case 9:
                case 11:
                
                if(m.dd<1 || m.dd>30)
                {
                    throw new DateException();
                }
                break;
            }
            m.Display();            
        }
        catch (DateException d)
        {
            System.out.print(d+"\n");
        }
        catch (MonthException m1) 
        {
            System.out.print(m1);
        }     
        
       // m.Display();
    }
    
}