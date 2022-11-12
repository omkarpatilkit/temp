package mAssignments;

public class mThreads implements Runnable {
    String name;

    mThreads(String name) {
        this.name = name;

    }

    public void run() {

        try {
            for (int i = 0; i <= 200; i++) {
                System.out.println("Hello " + this.name);
                // Thread.sleep(1000);
            }

        } catch (Exception e) {
            System.out.println(e);
        }

    }

    @Override
    public String toString() {
        return "This is object " + this.name;
    }
}
