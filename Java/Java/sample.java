/*import javax.swing.*;

public class sample extends JFrame {
    
    JLable j1;
    
    sample()
    {
        setVisible(true);
        setTitle("Sample Program");
        setSize(400,400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        j1 = new JLable("Enter Name : ");
        this.add(j1);
    }
    public static void main(String[] args) {
        
        sample s = new sample();
    }
    
}*/

import java.io.FileReader;

public class sample {
    public static void main(String[] args) throws Exception {
        FileReader f1 = new FileReader("abc.txt");
        int ch;
        int count =0;
        int line=0;
        int words=0;
        if((ch=f1.read())!=-1){
            line++;
            words++;
            count++;
        }
        while ((ch=f1.read())!=-1){
            String s =String.valueOf((char)ch);
            char c=(char)ch;
            if(c=='\n'){
                line++;
            }
            if(c==' '){
                words++;
            }
            if(c!=' '){
                count++;
            }
        }
        System.out.println("Characters count: "+ count);
        System.out.println("line count: "+ line);
        System.out.println("words count: "+ words);
        f1.close();
    }    
}