import java.util.Scanner;

public class java_input {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter your name: ");
        String name = sc.nextLine();

        System.out.println("Enter your age: ");
        int age = sc.nextInt();

        System.out.println("Enter your CGPA: ");
        float cg = sc.nextFloat();

        System.out.println("\nInformation about you is given below.");
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("CGPA: " + cg);

        // Close the Scanner
        sc.close();
    }
}
