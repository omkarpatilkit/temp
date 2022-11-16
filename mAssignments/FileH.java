package mAssignments;

import java.io.*;

public class FileH {

    public static void main(String[] args) {
        File myFile = new File("trial.txt");
        try {
            if (myFile.createNewFile()) {
                System.out.println("Created file");
            } else {
                System.out.println("Exists ");
            }
        } catch (IOException e) {

            e.printStackTrace();
            System.out.println(e);
        }

        FileWriter wr;
        try {
            wr = new FileWriter(myFile);
            wr.write("Hello there");
            wr.close();
        } catch (IOException e) {
            System.out.println(e);
            e.printStackTrace();
        }

    }

}
