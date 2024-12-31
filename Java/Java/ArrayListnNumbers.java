import java.util.Scanner;
import java.util.ArrayList;
import java.util.Iterator;

public class ArrayListnNumbers {
    
    public static void main(String[] args) {
        
        int n,i,num;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter How Many Number You Want : ");
        n = s.nextInt();
        
        ArrayList<Integer> a = new ArrayList<Integer>(n);
        
        for(i=0;i<n;i++)
        {
            System.out.print("Enter ArrayList Element "+(i+1)+" : ");
            num = s.nextInt();
            a.add(num);
        }
        
        
        System.out.print("\n\tArrayList Elements Are :\n"+a);
        
        Iterator it = a.iterator();
        
        System.out.print("\n\nDisplay Numbers Using Iterator : \n");
        while(it.hasNext())
        {
            Object obj = it.next();
            System.out.println(obj);
        }
        
    }
    
}