import java.io.*;
import java.util.*;

public class CopyFileAnotherFile {
    
    public static void main(String[] args) {
     
        try{
               
       // File f = new File("Fardin.txt");
        
        FileReader fr = new FileReader("Quetion.txt");
        FileWriter fw = new FileWriter("Fardin.txt");
        
            System.out.println("First File Data : \n");
            Scanner s = new Scanner(fr);;
            while(s.hasNextLine()){
                String data = s.nextLine();
                System.out.print(data);
                fw.write(data.toUpperCase());
            }
            
            fw.close();
            fr.close();
            
            FileReader fr1 = new FileReader("Fardin.txt");
            
            System.out.println("\n\nSecond File Data : \n");
            Scanner s1 = new Scanner(fr1);
            while(s1.hasNextLine()){
                String data1 = s1.nextLine();
                System.out.print(data1);
            }
            
            //fr.close();
            fr1.close();
            
        }catch (IOException e){
            System.out.print(e);
        }
    }
    
}