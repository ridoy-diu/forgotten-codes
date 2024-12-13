import java.util.Scanner;

public class problem_solving {
    public static void main(String[] args) {
        // int $ = 24;
        // System.out.println($);
        float pencil, pen, eraser;
        Scanner sc = new Scanner(System.in);

        pencil = sc.nextFloat();
        pen = sc.nextFloat();
        eraser = sc.nextFloat();

        float total = pencil + pen + eraser;
        total = (float) (total + total * 0.18f); // tax 18%;

        System.out.println(total);

        sc.close();
    }
}
