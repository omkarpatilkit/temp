package mAssignments;

import java.util.Scanner;

public class Str {

    public static void main(String[] args) {
        String str;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Please enter the name: ");
            str = sc.nextLine();
        }
        System.out.println(str.length());
        System.out.println(str.charAt(0));
        System.out.println(str.trim().substring(2));

        StringBuffer sb = new StringBuffer(str);
        System.out.println(sb.equals("any"));

    }

}
