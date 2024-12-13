#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[], int lowerBound, int upperBound)
{
    int pivot = arr[lowerBound];
    int start = lowerBound, end = upperBound;

    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(&arr[start], &arr[end]);
        }
    }
    swap(&arr[lowerBound], &arr[end]);

    return end;
}

void quickSort(int arr[], int lowerBound, int upperBound)
{
    if (lowerBound < upperBound)
    {
        int loc = partition(arr, lowerBound, upperBound);
        quickSort(arr, lowerBound, loc - 1);
        quickSort(arr, loc + 1, upperBound);
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

    quickSort(arr, 0, length - 1);
    printf("Sorted array -\n");
    printArray(arr, length);

    return 0;
}