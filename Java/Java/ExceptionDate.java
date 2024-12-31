import java.util.*;

class InvalidDate extends Exception{
    
    public String toString(){
        return "InvalidDateException";
    }
}

class ddmmyy{
    
    int date,month,year;
    Scanner s = new Scanner(System.in);
    
    void Accept(){
             System.out.print("Enter Date : ");
             date = s.nextInt();
             System.out.print("Enter Month : ");
             month = s.nextInt();
             System.out.print("Enter Year : ");
             year = s.nextInt();
        }
    
    void Display(){
        System.out.print(date+"/"+month+"/"+year);
    }
    
}

public class ExceptionDate {
    
    public static void main(String[] args) {
        
        ddmmyy d = new ddmmyy();
        
        try{
            
            d.Accept();
            
            if(d.month < 1 || d.month > 12){
                throw new InvalidDate();
            }
            
            switch(d.month){
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                if(d.date < 1 || d.date>31){
                    throw new InvalidDate();
                }
                break;
                case 4:
                case 6:
                case 9:
                case 11:
                if(d.date < 1 || d.date > 30){
                    throw new InvalidDate();
                }
                break;
                case 2:
                int max;
                if(d.year%4==0 || d.year%400==0){
                    max = 29;
                }
                else{
                    max = 28;
                }
                
                if(d.date > max){
                    throw new InvalidDate();
                }
                break;
            }
            
            d.Display();
        }
        catch (InvalidDate e){
            System.out.print(e);
        }
        
    }
    
}