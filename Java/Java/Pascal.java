import java.util.Scanner;

public class Pascal {
    
    public static void main(String[] args) {
        
        int n,i,j,space,t=1;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter How Many Rows You Want : ");
        n = s.nextInt();
        
        for(i=0;i<n;i++)
        {
            for(space=0;space<n-i-1;space++)
            {
                System.out.print(" ");
            }
            
            for(j=0;j<=i;j++)
            {
                if(i==0 || j==0)
                {
                    t = 1;
                }
                else
                {
                    t = t *(i-j+1)/j;
                }
                System.out.print(t+" ");
            }
            
            System.out.printf("\n");
        }
        
    }
    
}