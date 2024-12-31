import javax.swing.*;
import java.awt.*;

class Awt extends JFrame{
    
    Awt()
    {
        this.setVisible(true);
        this.setSize(200,200);
        this.setTitle("I am Fardin");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public static void main(String[] args) {
        
        Awt a = new Awt();
    }
    
}