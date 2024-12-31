import java.util.*;

public class SetInterface {
    
    public static void main(String[] args) {
        
        Integer[] i = { 10,30,50,70,90 };
        Integer[] j = { 50,20,40,60,10 };
        
        Set <Integer> set1 = new HashSet <Integer>();
        set1.addAll(Arrays.asList(i));
        
        Set <Integer> set2 = new HashSet <Integer>();
        set2.addAll(Arrays.asList(j));
        
        Set<Integer> union = new HashSet<Integer>(set1);
        union.addAll(set2);
        System.out.println("\n\tUnion is :\n"+union);
        
        Set<Integer> intersection = new HashSet<Integer>(set1);
        intersection.retainAll(set2);
        System.out.println("\n\tIntersection is :\n"+intersection);
        
        Set<Integer> difference1 = new HashSet<Integer>(set1);
        difference1.removeAll(set2);
        System.out.println("\n\tDifference of set1 from set2 id :\n"+difference1);
        
        Set<Integer> difference2 = new HashSet<Integer>(set2);
        difference2.removeAll(set1);
        System.out.println("\n\tDifference of set2 from set1 is :\n"+difference2);
        
    }
    
}