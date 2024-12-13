#include <stdio.h>
#include <stdbool.h>

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// ascending order
void bubbleSort1(int arr[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

// descending order
void bubbleSort2(int arr[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Original array -\n");
    printArray(arr, length);

    bubbleSort1(arr, length);
    printf("\nSorted array in ascending order -\n");
    printArray(arr, length);

    bubbleSort2(arr, length);
    printf("\nSorted array in descending order -\n");
    printArray(arr, length);

    return 0;
}