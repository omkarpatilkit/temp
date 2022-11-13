package mAssignments;

import java.util.Scanner;

public class ArrayCreator {

    private ArrayCreator() {
        // not allowed to craete object
    }

    public static int[] createArray() {

        int len;
        Scanner sc = new Scanner(System.in);
        System.out.println("Please enter length of array: ");
        len = sc.nextInt();

        int arr[] = new int[len];

        for (int i = 0; i < len; i++) {
            arr[i] = sc.nextInt();
            sc.nextLine();

        }

        return arr;
    }

}
