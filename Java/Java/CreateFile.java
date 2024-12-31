import java.io.File;
import java.io.IOException;

public class CreateFile {
    
    public static void main(String[] args) {
        
        try{
            
            File f = new File("myself.txt");
            
            if(f.createNewFile()){
                System.out.println("File is Created : "+f.getName());
            }else{
                System.out.println("File is Already Exist ");
            }
        }
        catch (IOException e){
            System.out.println("File is Not Created!");
        }
    }
    
}