import java.util.*;

public class ArrayListExample{
    
    public static void main(String[] args) {
        
        int n,i;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter ArrayList Size : ");
        n = s.nextInt();
        
        ArrayList<Integer> a = new ArrayList<Integer>(n);
        
        for(i=0;i<n;i++){
            
            System.out.print("Enter "+(i+1)+" ArrayList Element : ");
            int num = s.nextInt();
            a.add(num);
        }
        
        
        System.out.print(a);
    }
    
}