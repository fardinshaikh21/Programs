
public class SecondSmallElement {
    
    public static void main(String[] args) {
        
        int a[] = {15,10,20,1,3,30};
        int i;
        
        for(i=0;i<a.length;i++)
        {
            System.out.println(a[i]+" ");
        }
        
       int firstsmall = a[0];
       int secondsmall = a[0];
        
        for(i=1;i<a.length;i++)
        {
            if(a[i] < firstsmall )
            {
                secondsmall = firstsmall;
                firstsmall = a[i];
            }
            else if(a[i] < secondsmall && a[i] != firstsmall)
            {
                secondsmall = a[i];
            }
        }
        
        System.out.println("First Small Number is : "+firstsmall);
        System.out.println("Second Small Number is : "+secondsmall);
    }
    
}