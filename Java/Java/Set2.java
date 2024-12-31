import java.util.*;

public class Set2 {
    
    public static void main(String[] args) {
        
        Integer set1[] = {1,2,3,4};
        Integer set2[] = {4,5,2,7};
        
       // Set <Integer> s1 = new HashSet<>(Arrays.asList(set1));
        
          
        Set <Integer> s1 = new HashSet<>();
        Set <Integer> s2 = new HashSet<>();
        
        s1.add(20);
        s1.add(10);
        s1.add(30);
        s1.add(40);
        System.out.println(s1);
        
        s2.add(50);
        s2.add(10);
        s2.add(30);
        s2.add(60);
        System.out.println(s2);
        
        
        Set <Integer> union = new HashSet<>(s1);
        union.addAll(s2);
        System.out.println(union);
        
        Set <Integer> intersection = new HashSet<>(s1);
        intersection.retainAll(s2);
        System.out.println(intersection);
        
        Set <Integer> diffrence1 = new HashSet<>(s1);
        diffrence1.removeAll(s2);
        System.out.println(diffrence1);
        
        Set <Integer> diffrence2 = new HashSet<>(s2);
        diffrence2.removeAll(s1);
        System.out.println(diffrence2);
        
        
    }
    
}