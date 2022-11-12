package mAssignments;

public class master {

    public static void main(String[] args) {
        mThreads a = new mThreads("Omkar");
        mThreads b = new mThreads("Patil");
        mThreads c = new mThreads("ABCD");

        Thread t1 = new Thread(a);
        Thread t2 = new Thread(b);
        Thread t3 = new Thread(c);

        t1.setPriority(1);
        t2.setPriority(Thread.MAX_PRIORITY);
        t3.setPriority(Thread.NORM_PRIORITY);

        try {
            t1.start();
            t2.start();
            t3.start();

        } catch (Exception e) {
            System.out.println(e);
        }

        // Pattern p = new Pattern();
        // p.square(5);
        // p.rectangle(5,10);
        // p.triange(4);

        // m3 m = new m3();
        // m.displayFactors(34);
        // m.displayEvenFactors(50);
        // m.convertCase('m');
        // m4 mem = new m4();
        // m4 m = new m4();
        // System.out.println(m.multiplyFactors(10));
        // m.displayDigits(2546);
        // System.out.println(m.isContainsZero(35044));
        // System.out.println(mem);
        // System.out.println(m);
        // System.out.println(mem.countEven(123456));
        // System.out.println(m.countOdd(49811376));

    }
}