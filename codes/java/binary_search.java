public class binary_search {

    public static int binarySearch(int num[], int key) {
        int start = 0;
        int end = num.length - 1;

        while (start <= end) {
            int mid = (start + end) / 2;

            if (num[mid] == key)
                return mid;

            if (num[mid] < key)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }

    public static void reverse(int num[]) {
        int first = 0;
        int last = num.length - 1;

        while (first < last) {
            // swap
            int temp = num[first];
            num[first] = num[last];
            num[last] = temp;

            first++;
            last--;
        }
    }

    public static void print_pairs(int num[]) {

        int count = 0;

        for (int i = 0; i < num.length; i++) {
            // int current = num[i];
            for (int j = i + 1; j < num.length; j++) {
                System.out.print("(" + num[i] + ", " + num[j] + ") ");
                count++;
            }
            System.out.println();
        }
        System.out.println("Total pairs possible is " + count);
    }

    public static void print_sub_array(int num[]) { // sub array + max and min

        int max_sum = Integer.MIN_VALUE;
        int min_sum = Integer.MAX_VALUE;

        int count = 0;
        for (int i = 0; i < num.length; i++) {
            for (int j = i; j < num.length; j++) {
                int sum = 0;
                for (int k = i; k <= j; k++) {
                    System.out.print(num[k] + " ");
                    sum = sum + num[k];

                }
                System.out.print("(" + sum + ")");

                if (max_sum < sum) { // if -infiny less than current sum
                    max_sum = sum;
                }
                if (min_sum > sum) { // if infinity greater than current sum
                    min_sum = sum;
                }

                count++;
                System.out.println();
            }
            System.out.println();
        }
        System.out.println("Total number of subarrays is " + count);
        System.out.println("Max sum = " + max_sum);
        System.out.println("Min sum = " + min_sum);
    }

    public static void kadanes(int num[]) {
        int ms = Integer.MIN_VALUE;
        int cs = 0;
        for (int i = 0; i < num.length; i++) {
            cs += num[i];

            if (cs < 0) {
                cs = 0;
            }
            ms = Math.max(ms, cs);
        }
        System.out.println("Our max subarray sum is " + ms);
    }

    public static void main(String[] args) {
        int arr[] = { 1, -2, 1, 3, -4 };
        int key = 10;

        int n = binarySearch(arr, key);
        System.out.println("the index of the key is " + n);

        reverse(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();

        print_pairs(arr);
        System.out.println();

        print_sub_array(arr); // sub array + max and min
        System.out.println();

        kadanes(arr);
    }
}