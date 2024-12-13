import java.util.Scanner;

public class array {
    public static void main(String[] args) {
        int marks[] = new int[10];
        String name[] = new String[10];
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < marks.length; i++) {
            marks[i] = sc.nextInt();
            sc.nextLine();
            name[i] = sc.nextLine();
        }
        for (int i = 0; i < marks.length; i++) {
            System.out.println(marks[i]);
            System.out.println(name[i]);
        }
        sc.close();
    }
}
