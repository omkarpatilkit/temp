package mAssignments;

public class temp {

    public static void main(String[] args) {
        int arr[] = ArrayCreator.createArray();
        Arraytemp a = new Arraytemp(arr);

        Thread t1 = new Thread(a);
        t1.start();

    }
}