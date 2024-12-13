#include <stdio.h>

int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);

    int total = 0;

    for (int i = 1; i <= w; i++)
    {
        int a = k * i;
        total = total + a;
    }

    if (total <= n)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", total - n);
    }

    return 0;
}