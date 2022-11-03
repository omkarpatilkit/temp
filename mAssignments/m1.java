package mAssignments;

import java.util.Scanner;

public class m1 {

    public void printUpto(int n) {
        for (int i = 1; i <= n; i++) {
            System.out.print(i * 2 + "\t");
        }
        System.out.println();
    }

    public static void main(String[] args) {

        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Please enter a number: ");
        n = sc.nextInt();
        m1 m = new m1();
        m.printUpto(n);

    }
}