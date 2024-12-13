public class sorting {

    public static void BubbleSort(int arr[]) {
        int len = arr.length;
        for (int i = 0; i < len - 1; i++) {
            for (int j = 0; j < len - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    // swap
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    public static void SelectionSort(int arr[]) {
        int len = arr.length;
        for (int i = 0; i < len - 1; i++) {
            int minPos = i;
            for (int j = i + 1; j < len; j++) {
                if (arr[minPos] < arr[j]) {
                    minPos = j;
                }
            }
            int temp = arr[minPos];
            arr[minPos] = arr[i];
            arr[i] = temp;
        }
    }

    public static void counting_sort(int a[]) {
        int largest = Integer.MIN_VALUE;
        for (int i = 0; i < a.length; i++) {
            largest = Math.max(largest, a[i]); // will find the largest number for making the count frequency array
        }

        int count[] = new int[largest + 1]; // array starts from 0 that's why largest + 1
        for (int i = 0; i < a.length; i++) {
            count[a[i]]++; // frequency of array elements is found
        }

        // sorting
        int j = 0;

        // Ascending
        for (int i = 0; i < count.length; i++) {
            while (count[i] > 0) {
                a[j] = i;
                j++;
                count[i]--;
            }
        }

        // // Descending
        // for (int i = count.length - 1; i >= 0; i--) {
        //     while (count[i] > 0) {
        //         a[j] = i;
        //         j++;
        //         count[i]--;
        //     }
        // }

    }

    public static void printArray(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int arr[] = { 1, 5, 3, 4, 2 };

        int a[] = { 1, 4, 3, 2, 1, 4, 5, 9, 3, 2, 3, 2, 1, 2, 3 };

        BubbleSort(arr);
        printArray(arr);

        SelectionSort(arr);
        printArray(arr);

        counting_sort(a);
        printArray(a);
    }
}