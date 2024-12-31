import java.io.File;
import java.io.IOException;
import java.io.FileWriter;

public class WriteData {
    
    public static void main(String[] args) {
        
        try{
            FileWriter f = new FileWriter("myself.txt");
            f.write("I am Fardin Salauddin Shaikh.\nI am From Pune.\nI am Study in Abeda Inamdar Senior College Azam Campus.");
            f.close();
            System.out.println("Successfully Data Insert.");
        }
        catch(IOException e){
            System.out.println("Invalid File!");
        }
    }
    
}