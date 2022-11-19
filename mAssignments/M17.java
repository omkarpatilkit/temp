package mAssignments;

class m17Excep extends Exception {
    @Override
    public String toString() {
        return "Array is empty";
    }

}

public class M17 implements Runnable {

    private int arr[];

    public M17(int arr[]) {
        this.arr = arr;
    }

    @Override
    public boolean equals(Object obj) {

        if (this == obj)
            return true;
        if (this.arr.length != ((M17) obj).arr.length) {
            return false;
        }
        for (int i = 0; i < this.arr.length; i++) {
            if (this.arr[i] != ((M17) obj).arr[i]) {
                return false;
            }
        }
        return true;
    }

    public void run() {
        System.out.println("Thread is running");
        try {
            System.out.println("Addition is: " + addition());
            System.out.println("Highest number is: " + highestNumber());
            System.out.println("Second highest number is : " + secondHighest());
            havingTwoDigits();
        } catch (m17Excep e) {
            System.out.println(e);
        }
    }

    private int addition() throws m17Excep {
        int total = 0;
        if (arr.length == 0)
            throw new m17Excep();

        for (int i : arr) {

            total = total + i;
        }

        return total;
    }

    private int highestNumber() throws m17Excep {
        if (arr.length == 0) {
            throw new m17Excep();
        }
        int a = arr[0];
        for (int i : arr) {
            if (a <= i) {
                a = i;
            }
        }
        return a;
    }

    private int secondHighest() throws m17Excep {
        if (arr.length == 0) {
            throw new m17Excep();
        }
        int a1 = arr[0];
        int a2 = arr[0];

        for (int i : arr) {
            if (i >= a1) {
                a2 = a1;
                a1 = i;
            } else if (i >= a2) {
                a2 = i;

            }
        }
        return a2;
    }

    private void havingTwoDigits() {
        int a;
        System.out.print("Two or more digits are: ");
        for (int i : arr) {
            a = i;
            int total = 0;
            while (a > 0) {
                total++;
                a = a / 10;
            }
            if (total >= 2) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }

}
