import java.util.Scanner;

public class basic{

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        System.out.println("Please enter the name: ");
        String str = sc.nextLine();

        // System.out.println("Hello "+ str);
        System.out.println("Please enter age: ");
        int age = sc.nextInt();
        System.out.println("Hello "+ str + " you are "+ age + " years old");
        
    }
}