
import java.util.*;
import java.io.*;

public class ReadFile{
    
    public static void main(String[] args) {
        
        try{
        FileReader fr = new FileReader("Quetion.txt");
        
        Scanner s = new Scanner(fr);
        
        while(s.hasNextLine()){
            String data = s.nextLine();
            System.out.print(data.toUpperCase());
         }
            
        }catch (IOException e){
            System.out.println(e);
        }
        
        
    }
    
}