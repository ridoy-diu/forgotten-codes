#include <stdio.h>

void merge(int arr[], int lowerBound, int mid, int upperBound)
{
    int i, j, k;

    int n1 = mid - lowerBound + 1;
    int n2 = upperBound - mid;

    int left[n1], right[n2];

    for (i = 0; i < n1; i++)
    {
        left[i] = arr[lowerBound + i];
    }
    for (j = 0; j < n2; j++)
    {
        right[j] = arr[mid + 1 + j];
    }

    i = j = 0;
    k = lowerBound;

    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int lowerBound, int upperBound)
{
    if (lowerBound < upperBound)
    {
        int mid = lowerBound + (upperBound - lowerBound) / 2;
        mergeSort(arr, lowerBound, mid);
        mergeSort(arr, mid + 1, upperBound);
        merge(arr, lowerBound, mid, upperBound);
    }
}

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Original array -\n");
    printArray(arr, length);

    mergeSort(arr, 0, length - 1);
    printf("Sorted array -\n");
    printArray(arr, length);

    return 0;
}