import java.util.Scanner;

public class TwoDArray {
    
    public static void main(String[] args) {
        
        int r,c,i,j;
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter How Many Rows : ");
        r = s.nextInt();
        System.out.print("Enter How Many Columns : ");
        c = s.nextInt();
        
        int arr[][] = new int[r][c];
        
        System.out.println("Enter Array Elements : ");
        
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                arr[i][j] = s.nextInt();
            }
        }
        
        
        System.out.println("Array Elements Are : ");
        
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
        
        
    }
    
}