import javax.swing.*;
import java.awt.*;

public class SwingAwt extends JFrame{
    
    JLabel j1;
    
    SwingAwt(){
        
        this.setVisible(true);
        this.Size(300,300);
        this.Title("Sample Frame ");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        j1 = new JLabel("WelCome to Jave");
        setLayout(new FlowLayout(FlowLayout_LEFT));
        
        this.add(j1);
        
    }
    public static void main(String[] args) {
        
        SwingAwt s = new SwingAwt();
    }
    
}