import java.util.Scanner;

public class function {
    public static void bin_to_dec(int n) { // parameters or formal parameters
        int actual_num = n;
        int power = 0;
        int dec = 0;

        while (n > 0) {
            int last_digit = n % 10; // To get last digit
            dec = dec + (last_digit * (int) Math.pow(2, power));
            power++;
            n /= 10; // To remove last digit
        }
        System.out.println("Decimal number of " + actual_num + " is " + dec);
    }

    public static void dec_to_bin(int n) {
        int actual_num = n;
        int bin = 0;
        int power = 0;

        while (n > 0) {
            int remainder = n % 2;
            bin = bin + (remainder * (int) Math.pow(10, power));
            power++;
            n /= 2;
        }
        System.out.println("Binary number of " + actual_num + " is " + bin);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a binary number: ");
        int num = sc.nextInt();
        bin_to_dec(num); // arguments or actual parameters

        System.out.println("Enter a decimal number: ");
        int num2 = sc.nextInt();
        dec_to_bin(num2);
        
        sc.close();
    }
}
