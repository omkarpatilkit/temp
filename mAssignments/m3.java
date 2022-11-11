package mAssignments;

public class m3 {
    public void displayFactors(int n) {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0)
                System.out.print(i + "\t");
        }
        System.out.println();
    }

    public void displayEvenFactors(int n) {
        for (int i = 2; i <= n / 2; i++) {
            if ((n % i == 0) && i % 2 == 0)
                System.out.print(i + "\t");
        }
        System.out.println();
    }

    public void convertCase (char c){

        if (c >= 'a' && c <= 'z')
        {
            c = (char) (c - 32);
        }
        else if(c >= 'A' && c <= 'Z')
        {
            c = (char) (c + 32);
        }
        System.out.println(c);
    }
    

}