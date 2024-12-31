import java.io.*;


class filesample{
    public static void main(String []args){
        
        try{
            
            try{
                FileWriter f = new FileWriter("sample.txt");
                f.write("I am Fardin");
            }
            
            System.out.print("Sucessfully Data Wrote in File");
        }
        catch(IOException i)
        {
            System.out.print(i);
        }
        
            
    }
}

