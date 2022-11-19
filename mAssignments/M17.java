package mAssignments;

class m17Excep extends Exception{
    @Override
    public String toString(){
        return "Array is empty";
    }

}

public class M17 implements Runnable {



    public void run() {
        System.out.println("Thread is running");
    }

    public int addition(int arr[]) throws m17Excep {
        int total = 0;
        if (arr.length == 0)
           throw new m17Excep();

        for (int i : arr) {

            total = total + i;
        }

        return total;
    }

}
