#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            // right = mid - 1;  // iterative way
            return binarySearch(arr, left, mid - 1, target);  // recursive way
        }
        else
        {
            // left = mid + 1;
            return binarySearch(arr, mid + 1, right, target);
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int length = sizeof(arr) / sizeof(arr[0]);
    int target = 56;

    int result = binarySearch(arr, 0, length - 1, target);

    (result == -1)
        ? printf("%d not found in the array.\n", target)
        : printf("%d found at index '%d'.\n", target, result);

    return 0;
}