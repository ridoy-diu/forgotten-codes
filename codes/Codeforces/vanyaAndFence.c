#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, h;
    scanf("%d %d", &n, &h);

    int temp = 2 * h;

    int *arr = (int *)malloc(n * sizeof(int));

    int width1 = 0, width2 = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > temp)
            return 1;

        else
        {
            if (arr[i] <= h)
                width1++;
            else
                width2 += 2;
        }
    }
    printf("%d\n", width1 + width2);

    return 0;
}