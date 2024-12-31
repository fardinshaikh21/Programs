import java.util.*;

public class HashTableExample {
    
    public static void main(String[] args) {
        
        Hashtable<String,Integer> ht = new Hashtable<String,Integer>();
        
        ht.put("Fardin",20000);
        ht.put("Akash",30000);
        System.out.print(ht);
        
        Set s = ht.entrySet();
        Iterator it = s.iterator();
        
        while(it.hasNext())
        {
            Map.Entry me = (Map.Entry)it.next();
            System.out.println("Key : "+me.getKey()+"Value : "+me.getValue());
        }
    }
    
}