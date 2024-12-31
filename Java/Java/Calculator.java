import javax.swing.*;
import java.awt.*;

public class Calculator extends JFrame{
    JPanel p1,p2;
    JLabel l1;
    JButton nbtn[]=new JButton[10];
    JButton ba,bs,bm,bd;
    calculator(){
        //top box
        l1=new JLabel("0",SwingConstants.RIGHT);
        l1.setOpaque(true);
        l1.setBackground(Color.BLACK);
        l1.setForeground(Color.BLUE);
        l1.setFont( new Font("Retro", Font.PLAIN, 40));
        p1=new JPanel();
        p1.setLayout(new BorderLayout());
        p1.setBounds(2,0,380,80);

        //buttons
        for (int i = 0; i < 10; i++) {
            nbtn[i]=new JButton(String.valueOf(i));
        }
        ba = new JButton("add"); 
        bs = new JButton("sub"); 
        bm = new JButton("mul"); 
        bd = new JButton("div"); 

        p2 = new JPanel();
        p2.setLayout(new GridLayout(3,5));
        p2.setBounds(2,100,380,380);

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(null);
        this.setSize(400,500);
        this.setTitle("CAlculator");

        //topbox adds
        p1.add(l1);
        
        //btns add
        for (int i = 0; i < 10; i++) {
            p2.add(nbtn[i]);
        }
        p2.add(ba);
        p2.add(bs);
        p2.add(bm);
        p2.add(bd);
        
        //panels add
        this.add(p1);
        this.add(p2);

        this.setVisible(true);
    }
    public static void main(String[] args) {
        new calculator();
    }
}