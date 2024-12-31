//import java.util.*;

/*
public class AllQuetions {
    
    public static void main(String[] args) {
        
        ArrayList <Integer> a = new ArrayList <Integer>();
        a.add(10);
        a.add(20);
        a.add(30);
        a.add(40);
        a.add(50);
        System.out.println(a);
        
        LinkedList <Integer> a1 = new  LinkedList<Integer>();
        a1.add(1);
        a1.add(2);
        a1.add(3);
        a1.add(4);
        a1.add(5);
        System.out.println(a1);
           
    }
    
}*/

/*public class AllQuetions {
    
    public static void main(String[] args) {
        
        int a[] = {29,83,8,48,1,19};
        int i;
        
        for(i=0;i<a.length;i++){
            System.out.print(a[i]+" ");
        }
        
        Arrays.sort(a);
        
        System.out.println();
        
        for(i=0;i<a.length;i++){
            System.out.print(a[i]+" ");
        }
        
        System.out.println("\nSecond Smallest Element is : "+a[1]);
        
    }
}   */ 

/*
public class AllQuetions {
    
    public static void main(String[] args) {   
        
        int r,c,i,j;
        
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter How Many Rows You Want : ");
        r = s.nextInt();
        System.out.print("Enter How Many Columns You Want : ");
        c = s.nextInt();
        
        int array[][] = new int[r][c];
        
        System.out.println("Enter Matrix Elements : ");
        
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                
                array[i][j] = s.nextInt();
            }
        }
        
        System.out.println("Matrix Elements are : ");
        
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                
                System.out.print(array[i][j]+" ");
            }
            System.out.println();
        }
    }
}*/


/*
abstract class Shape{
    
    abstract double Area();
    abstract double Volume();
}

class Sphere extends Shape{
    
    int radius;
    
    Sphere(int radius){
        this.radius = radius;
    }
    
    double Area(){
        return 4 * 3.14 * this.radius * this.radius;
    }
    
    double Volume(){
        return 4 * 3.14 * this.radius * this.radius * this.radius / 3;
    }
    
}

public class AllQuetions {
    
    public static void main(String[] args) { 

        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter Sphere Radius : ");
        int r = s.nextInt();
        
        Sphere s1 = new Sphere(r);
        
        System.out.println("Area of Sphere is : "+s1.Area());
        System.out.println("Volume of Sphere is : "+s1.Volume());
    }
}
*/

/*

class University{
    String Uname;
    
    University(String Uname){
        this.Uname = Uname;
    }
    
    void Display(){
        System.out.println("University Name is : "+this.Uname);
    }
}

class College extends University{
    
    String Cname;
    
    College(String Uname,String Cname){
        super(Uname);
        this.Cname = Cname;
    }
    
    void Display(){
        super.Display();
        System.out.println("College Name is : "+this.Cname);
    }
}


class Department extends College{
    
    String Dname;
    
    Department(String Uname,String Cname,String Dname){
        super(Uname,Cname);
        this.Dname = Dname;
    }
    
    void Display(){
        super.Display();
        System.out.println("Department Name is : "+this.Dname);
    }
}
public class AllQuetions {
    
    public static void main(String[] args) { 
     
        Department d = new Department("Pune","Abeda","BCA");
        d.Display();
        
    }
}
*/


//import java.io.File;  // Import the File class
/*import java.io.*;

public class AllQuetions {
    
    public static void main(String[] args) throws IOException { 
        
      /* try{
           
           File obj = new File("Quetion.txt");
           
           if(obj.createNewFile()){
               System.out.println("File is Created : "+obj.getName());
           }else{
               System.out.println("File Already Exists");
           }
       }
       catch (Exception e){
           System.out.println(e);
       } */ // Create New File 
        
       /* try{
            
            FileWriter fw = new FileWriter("Quetion.txt");
            
            fw.write("I am Fardin Shaikh. From Abeda College. ");
            fw.close();
            System.out.println("Succefully Insert Data");
        }
        catch (IOException e){
            System.out.println(e);
        } */  // Insert Data 
        
        /*
        try{
            FileReader fr = new FileReader("Quetion.txt");
            Scanner myReader = new Scanner(fr);
            while (myReader.hasNextLine()) {
            String data = myReader.nextLine();
            System.out.println(data);
           }
           myReader.close();
        }     
           catch (FileNotFoundException e) {
           System.out.println("An error occurred.");
        }
        
        */ // Display File Data
        
        /*try{
             File f = new File("Quetion1.txt");
             
             if(f.createNewFile()){
                 System.out.println("Created New File : "+f.getName());
             }else{
                 System.out.println("File is Already Exists");
             }
        }catch (IOException e){
            System.out.println(e);
        }*/ //create New File
        
           /* FileReader fr = new FileReader("Quetion.txt");
            FileWriter fw = new FileWriter("Quetion1.txt");
            
            fw.write(fr.toUpperCase());
           /*int i ;
        
        while((i = fr.read()) != -1){
            
            if(Character.isDigit(i)==false){
                
                if(Character.isLowerCase(i) || Character.isUpperCase(i)){
                    
                    fw.write(Character.toUpperCase(i));
                }
                
            }
            else{
                System.out.println("*");
            }
            
        }
        
        fr.close();
        fw.close();*/
        
              /*  FileReader fr1 = new FileReader("Quetion1.txt");
                Scanner myReader = new Scanner(fr1);
                while (myReader.hasNextLine()) {
                String data = myReader.nextLine();
                System.out.println(data);
            }
        
        
        myReader.close();
    }
}
*/

public class AllQuetions {
    
    public static void main(String[] args){ 
        
        String s1 = "Fardin";
        String s2 = "  Fardin  ";
        String s3 = " Shaikh";
        String s4 = "";
        
        
        System.out.println("String1 is : "+s1);
        System.out.println("String2 is : "+s2);
        System.out.println("String3 is : "+s3);
        System.out.println("String4 is : "+s4);
        
        System.out.println("\n\nUpperCase : "+s1.toUpperCase());
        System.out.println("LowerCase : "+s1.toLowerCase());
        System.out.println("Concat : "+s1.concat(s3));
        System.out.println("Replace : "+s1.replace("F","H"));
        System.out.println("Contains : "+ s1.contains("din"));
        System.out.println("EndsWith : "+s1.endsWith("n"));
        System.out.println("StartsWith : "+s1.startsWith("F"));
        System.out.println("Equals : "+s1.equals(s3));
        System.out.println("Remove Whitespace : "+s2.trim());
        System.out.println("IsEmpty : "+s4.isEmpty());
        System.out.println("Length : "+s2.length());
    }
}
