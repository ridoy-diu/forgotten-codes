#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    int count = 0;

    scanf("%d %d", &n, &k);

    if (k > n)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    int *ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory Allocation Failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if ((ptr[i] >= ptr[k - 1]) && (ptr[i] > 0))
        {
            count++;
        }
    }

    printf("%d\n", count);

    free(ptr);

    return 0;
}