import java.util.Scanner;

public class operator {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // Binary operators +, -, *, /, %
        System.out.println("enter two numbers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();

        System.out.println("Additon = " + (a+b));
        System.out.println("Subtraction = " + (a-b));
        System.out.println("Multiplication = " + (a*b));
        System.out.println("Division = " + ((float)a/b));
        System.out.println("Remainder = " + (a%b));

        // Unary operators ++, --
        a++;
        b--;
        System.out.println(a);
        System.out.println(b);
        ++a;
        --b;
        System.out.println(a);
        System.out.println(b);
        System.out.println(++a);
        System.out.println(a++);

        // Relational operators ==, !=, >, <, >=, <=

        // Logical operators &&, ||, !

        // Assignment operators =, +=, -=, *=, /=, %=

        // Ternary operator // conditon ? statement1 : statement2

        sc.close();
    }
}