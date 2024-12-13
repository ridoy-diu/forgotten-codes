import java.util.Scanner;

public class sum {
    public static void main(String[] args) {
        int a, b;

        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();

        int sum = a + b;
        int product = a * b;

        System.out.println("The sum of two numbers is " + sum);
        System.out.println("The product of two numbers is " + product);

        sc.close();
    }
}



// public class sum {
//     public static void main(String[] args) {
//         byte b = 4;
//         char c = 'a';
//         short s = 512;
//         int i = 1000;
//         float f = 3.14f;
//         double d = 99.9954;
//         double result = (f * b) + (i % c) - (d * s);
//         System.out.println(result);
//     }
// }

