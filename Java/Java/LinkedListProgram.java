import java.util.LinkedList;
import java.util.Iterator;

public class LinkedListProgram {
    
    public static void main(String[] args) {
        
        LinkedList l = new LinkedList(); // Take All DataType Elements
        //LinkedList<String>l = new LinkedList(); // Take Only String Datatype Elements 
        //LinkedList<String> l = new LinkedList<String>();
        
        l.add("Fardin");
        l.add(21);
        l.add(true);
        l.add(20.1);
        
        /* Display Length for LinkedList */
        
        System.out.println("LinkedList Length is : "+l.size());
        
        /* Access Element Using get(Index) Method */
        System.out.println("Access Element Using Get Method : "+l.get(1));
        
        /* Display All Data */
        System.out.println(l);
        
        /* Display Data Using Iterator */
        Iterator i = l.iterator();
        System.out.print("\nDisplay Data Using Iterator :\n");
        while(i.hasNext())
        {
            Object obj = i.next();
            System.out.println(obj);
        }
        
        /* Insert Data First and Last Position */
        l.addFirst("Shaikh");
        l.add("Pune");
        System.out.println("\nInsert Data First & Last Position : \n\n"+l);
        
        /* Remove Data Using Remove Method */
        l.remove(4); // Remove 20.1
        l.remove(0); // Shaikh
        l.remove("Fardin");
        System.out.println("\nRemove Elements 20.1 , Fardin & Shaikh :\n\n"+l);
        
        l.add(0,"Aman");
        System.out.println("\nAdd Aman Element at the 0 Position \n\n"+l);
        
        l.set(0,"Fardin");
        System.out.println("\nUpdate Aman to Fardin \n\n"+l);
        
        
    }
    
}