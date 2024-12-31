import java.util.*;

class GCD{
    public static void main(String []args){

        Scanner s = new Scanner(System.in);

        System.out.print("Enter First Number : ");
        int num1 = s.nextInt();
        System.out.print("Enter Second Number : ");
        int num2 = s.nextInt();
        
        int gcd = 0;

        for(int i=1;i<=num1 && i<=num2;i++){
            if(num1 % i == 0 && num2 % i == 0){
               gcd = i;
            }
        }

        System.out.println("GCD is : "+gcd);

        int lcm = (num1 * num2) / gcd;
        System.out.println("LCM is : "+lcm);

        while(num1 != num2){
            
            if(num1 > num2){
                
                num1 -= num2;
                //num1 = num1 - num2;
            }else{
                num2 -= num1;
                //num2 = num2 - num1;
            }
        }

        System.out.println("GCD is : "+num1);

        
    }
}