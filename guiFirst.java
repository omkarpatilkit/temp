import javax.swing.JButton;
import javax.swing.JFrame;

public class guiFirst {

    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setTitle("Hello there");
        frame.setSize(500, 500);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JButton button1 = new JButton("Hello");

    }

}
