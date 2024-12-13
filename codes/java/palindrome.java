import java.util.Scanner;

public class palindrome {
    public static int reverse(int n) {
        int rev = 0;
        
        while (n>0) {
            int last_digit = n % 10;
            rev = (rev*10) + last_digit;
            n/=10;
        }
        return rev;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        if(n == reverse(n))
        {
            System.out.println("Palindrome");
        }
        else{
            System.out.println("Not Palindrome");
        }

        sc.close();
    }
}
