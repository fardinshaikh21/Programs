import java.util.ArrayList;

class Arraylistsample{
    
    public static void main(String[] args) {
        
        ArrayList<String> obj = new ArrayList<>();
        
        obj.add("I am Fardin Shaikh. ");
        obj.add("I am From Pune.");
        obj.add(0,"Aman ");
        
        for(int i=0;i<obj.size();i++)
        {
            System.out.println(obj.get(i));
        }
        
        System.out.println("ArrayList Length is : "+obj.size());
        System.out.println(obj.get(1));  
        System.out.println(obj.remove(0));
        System.out.println(obj);        
    }
    
}