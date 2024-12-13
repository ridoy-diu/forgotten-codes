import java.util.Scanner;

public class loops {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int last_digit;

        // // Print reverse of a number
        // while (num > 0) {
        //     last_digit = num % 10;
        //     num /= 10;
        //     System.out.print(last_digit);
        // }
        // System.out.println();

        // Reverse the given number
        int rev = 0;
        while (num > 0) {
            last_digit = num % 10;
            rev = (rev * 10) + last_digit;
            num /= 10;
        }
        System.out.println(rev);

        sc.close();
    }
}
