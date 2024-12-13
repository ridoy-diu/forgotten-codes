#include <stdio.h>

int main()
{
    long long int arr[4];

    int result = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] == arr[j])
            {
                result++;
                break;
            }
        }
    }

    printf("%d\n", result);

    return 0;
}