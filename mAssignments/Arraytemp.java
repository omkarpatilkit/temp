package mAssignments;

class ArrayTempExcep extends Exception {
    // temp class
    public String toString() {
        return "This array is empty";
    }
}

public class Arraytemp implements Runnable {
    int arr[];

    Arraytemp(int arr[]) {
        this.arr = arr;

    }

    public void run() {
        System.out.println("Thread started");
        try {
            System.out.println(summations(arr));

        } catch (ArrayTempExcep e) {
            System.out.println(e);
        }

    }

    public int summations(int arr[]) throws ArrayTempExcep {
        if (arr.length == 0) {
            throw new ArrayTempExcep();
        }

        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum = sum + arr[i];
        }

        return sum;

    }

}
