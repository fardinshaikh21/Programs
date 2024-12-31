import java.util.*;

public class Ages {
    
    public static void main(String[] args) {
        
        int n,i,age;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter Your How Mant Family Member : ");
        n = s.nextInt();
        
        int arr[] = new int[n];
        
        for(i=0;i<arr.length;i++){
            
            System.out.printf("Enter "+(i+1)+" Member Age : ");
            age = s.nextInt();
            arr[i] = age;
        }
        
        int eldest = arr[0];
        int youngest = arr[0];
        
        for(i=1;i<arr.length;i++){
            
            if(eldest<arr[i]){
                eldest = arr[i];
            }
            
            if(youngest>arr[i]){
                youngest = arr[i];
            }
        }
        
        System.out.println("Youngest Person Age is : "+youngest);
        System.out.println("Eldest Person Age is : "+eldest);
    }
    
}