import java.util.Scanner;

public class tram {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int min = 0, current = 0;

        while (n > 0) {

            int exit = sc.nextInt(), enter = sc.nextInt();

            current = current - exit + enter;
            min = Math.max(min, current);
            n--;
        }
        System.out.println(min);

        sc.close();
    }
}