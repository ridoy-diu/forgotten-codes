#include <stdio.h>

void linearSearch(int arr[], int length, int target)
{
    int flag = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == target)
        {
            printf("%d found at index '%d'.\n", target, i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d not found in the array.\n", target);
    }
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int length = sizeof(arr) / sizeof(arr[0]);
    int target;

    // printf("\nEnter the number you want to search -\n");
    // scanf("%d", &target);
    // linearSearch(arr, length, target);

    linearSearch(arr, length, 10);
    linearSearch(arr, length, 56);

    return 0;
}