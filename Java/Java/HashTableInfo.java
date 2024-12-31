import java.util.*;
/*import java.util.Hashtable;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import java.util.Collections;
*/

public class HashTableInfo {
    
    public static void main(String[] args) {
        
        Hashtable<String,Integer> ht = new Hashtable<String,Integer>();
        
        ht.put("Akash",40000);
        ht.put("Suleman",20000);
        ht.put("Fardin",50000);
        ht.put("Aman",30000);
      
        System.out.println(ht);
      
        
        Set s = ht.entrySet();
        Iterator it = s.iterator();
      
        while(it.hasNext())
        {
            Map.Entry me = (Map.Entry)it.next();
            
            System.out.println("Key : "+me.getKey()+" Value : "+me.getValue());
        }
        
    }
    
}