
public class QuestionPaper {
    
    public static void main(String[] args) {
        
        int a[] = {89,29,38,2,1,9};
        
        for(int i=0;i<a.length;i++){
            System.out.print(a[i]+" ");
        }
        
        int first = a[0];
        int second = a[0];
        
        for(int i=1;i<a.length;i++){
            
            if(first > a[i]){
                second = first;
                first = a[i];
            }
            else if(second < first && second != first){
                second = a[i]; 
            }
        }
        
        System.out.println("First Value is : : "+ first);
        System.out.println("Second Value is : : "+ second);
        
    }
    
    
}