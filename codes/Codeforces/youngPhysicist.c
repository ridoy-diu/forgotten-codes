#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x, y, z, sum = 0, sum2 = 0, sum3 = 0;
    while (n--)
    {
        scanf("%d %d %d", &x, &y, &z);
        sum += x;
        sum2 += y;
        sum3 += z;
    }
    if (sum == 0 && sum2 == 0 && sum3 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}