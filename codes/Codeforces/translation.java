import java.util.Scanner;

public class translation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s1 = sc.nextLine();
        String s2 = sc.nextLine();

        int len = s1.length();
        boolean yes = true;

        if (len != s2.length())
            System.out.println("NO");
        else {
            for (int i = 0; i < len; i++) {
                if (s1.charAt(i) != s2.charAt(len - i - 1))
                    yes = false;
            }

            if (yes)
                System.out.println("YES");
            else
                System.out.println("NO");

        }

        sc.close();
    }
}
