#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int cells = 1;
    for (int i = 1; i <= n; i++)
    {
        cells = cells + 4 * (i - 1);
    }
    printf("%d\n", cells);
    return 0;
}