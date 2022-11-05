package mAssignments;

public class m4 {
    public int multiplyFactors(int n) {

        int multi = 1;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                multi = multi * i;
            }
        }
        return multi;
    }

    public void displayDigits(int n) {
        while (n > 0) {
            System.out.println(n % 10);
            n = n / 10;
        }
    }

    public boolean isContainsZero(int n) {
        while (n > 0) {
            if (n % 10 == 0) {
                return true;
            }
            n = n / 10;
        }
        return false;
    }

}