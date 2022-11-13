package mAssignments;

public class temp {

    public static void main(String[] args) {
        Pattern p = new Pattern();
        try {
            p.square(-2);
        } catch (negativeInputException e) {
            System.out.println(e);
        }

    }
}