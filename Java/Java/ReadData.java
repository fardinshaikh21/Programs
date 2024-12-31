/*import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.FileReader;
import java.util.Scanner;

public class ReadData {
    
    public static void main(String[] args) {
        
        File f = new File("FS.text");
        Scanner s = new Scanner(f);
        
        while(s.hasNextLine())
        {
            String data = s.nextLine();
            System.out.print(data);
        }
        
        s.close();
    }
    
}*/

import java.io.FileReader;
import java.io.IOException;

public class ReadData{
    public static void main(String[] args) throws IOException {
        FileReader f1 = new FileReader("myself.txt");
        int ch;
        
        while ((ch=f1.read())!=-1){
            String s =String.valueOf((char)ch);
            System.out.print(s);
        }
        f1.close();
    }
}

