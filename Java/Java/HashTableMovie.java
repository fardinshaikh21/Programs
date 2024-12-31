import java.util.*;
import java.util.Scanner;

public class HashTableMovie {
    
    public static void main(String[] args) {
        
        Hashtable <String,String> ht = new Hashtable <String,String>();
        
        ht.put("No_Entry","Fardin_Khan");
        ht.put("Raees","Shahrukh_Khan");
        ht.put("Jannat","Emraan_Hashmi");
        ht.put("Awapapan","Emraan_Hashmi");
        ht.put("Raees","Shaikh");
        
        System.out.print(ht);
        
        /*Set s = ht.entrySet();
        Iterator t = s.iterator();
        
        while(t.hasNext())
        {
            Map.Entry me = (Map.Entry)t.next();
            
            System.out.print("\nMovie_Name : "+me.getKey()+" Actor_Name : "+ me.getValue());
        }
        */
        
    }
    
}