import java.util.Scanner;

public class largest_and_smallest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter how many numbers you want to take:");
        int n = sc.nextInt();
        int num[] = new int[n];

        int largest = Integer.MIN_VALUE; // -infinity
        int smallest = Integer.MAX_VALUE;

        for (int i = 0; i < n; i++) {
            
            num[i] = sc.nextInt();

            if (num[i] > largest) {
                largest = num[i];
            }
            
            if (num[i] < smallest) {
                smallest = num[i];
            }
        }

        System.out.println("The largest value is " + largest + " and the smallest value is " + smallest);

        sc.close();

    }
}
