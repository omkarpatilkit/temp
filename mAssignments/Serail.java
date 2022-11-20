package mAssignments;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;

class Students implements Serializable {
    private int rollNumber;
    private String name;

    public int getRollNumber() {
        return rollNumber;
    }

    public String getName() {
        return name;
    }

    Students(int n, String nm) {
        this.rollNumber = n;
        this.name = nm;
    }

}

public class Serail {

    public static void main(String[] args) {
        Students s1 = new Students(1, "ab");
        Students s2 = new Students(2, "xyz");

        try {
            FileOutputStream fo = new FileOutputStream("obj.txt");
            ObjectOutputStream ob = new ObjectOutputStream(fo);
            ob.writeObject(s1);
            ob.writeObject(s2);

            ob.close();
        } catch (Exception e) {
            System.out.println(e);
        }

        try {
            FileInputStream fi = new FileInputStream("obj.txt");
            ObjectInputStream oi = new ObjectInputStream(fi);
            System.out.println(((Students) oi.readObject()).getRollNumber());
            System.out.println(((Students) oi.readObject()).getRollNumber());

            oi.close();
        } catch (Exception e) {
            System.out.println(e);
        }

    }
}
