
public class StringBufferdClass {
    
    public static void main(String[] args) {
        
        StringBuffer s = new StringBuffer();
        
        s.append("Fardin ");
        System.out.println(s);
        s.append("Shaikh");
        System.out.println("Append : "+s);
        System.out.println("Insert : "+s.insert(0,"Hi "));
        System.out.println("Replace hi : "+s.replace(0,2,"Hello"));
        System.out.println("Substring : "+s.substring(6,12)); 
        //System.out.println("Set Character : "+s.setCharAt(0,"S"));
        System.out.println("Delete hello : "+s.delete(0,5));
        System.out.println("Length : "+s.length());
        System.out.println("Capacity : "+s.capacity());
        System.out.println("Reverse : "+s.reverse());
        
    }
    
}