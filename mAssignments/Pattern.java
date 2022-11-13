package mAssignments;

class negativeInputException extends Exception {
    @Override
    public String toString() {
        return "Please enter positive number";
    }
}

public class Pattern implements Runnable {

    public void run() {
        System.out.println("Thread for Pattern is started");
    }

    public void square(int a) throws negativeInputException {

        if (a <= 0) {
            throw new negativeInputException();
        }
        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= a; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    public void rectangle(int height, int width) {

        for (int i = 1; i <= height; i++) {
            for (int j = 1; j <= width; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    public void triange(int a) {
        int prev = 1;
        for (int i = 1; i <= a; i++) {
            for (int j = a - i; j > 0; j--) {
                System.out.print(" ");
            }
            for (int j = 1; j <= prev; j++) {
                System.out.print("*");
            }
            prev = prev + 2;
            System.out.println();
        }
    }

}
