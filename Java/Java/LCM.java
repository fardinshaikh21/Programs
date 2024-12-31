import java.util.*;

class LCM{
    public static void main(String args[]){

        Scanner s = new Scanner(System.in);

        System.out.print("Enter First Number : ");
        int num1 = s.nextInt();
        System.out.print("Enter Second Number : ");
        int num2 = s.nextInt();

        int lcm = num1 > num2 ? num1 : num2;

        while(num1 != num2){
            if(lcm % num1 == 0 && lcm % num2 == 0){
                System.out.println("LCM is : "+lcm);
                break;
            }
              lcm++;
        }
    }
}