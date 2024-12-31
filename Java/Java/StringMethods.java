
public class StringMethods {
    
    public static void main(String[] args) {
        
        String str1 = "  Hello Fardin  ";
        String str2 = "How Are You?";
        
        System.out.println("Length : "+str1.length());
        System.out.println("Upper Case : "+str1.toUpperCase());
        System.out.println("Lower Case : "+str1.toLowerCase());
        System.out.println("Concat : "+str1.concat(str2));
        System.out.println("isEmpty : "+str1.isEmpty());
        System.out.println("Trim : "+str1.trim());
        System.out.println("Substring index 8 to end : "+str1.substring(8));
    }
    
}