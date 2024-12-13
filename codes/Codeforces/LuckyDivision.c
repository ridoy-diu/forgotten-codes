#include <stdio.h>

int isLucky(int n)
{

    while (n > 0)
    {
        int lastDigit = n % 10;
        if (lastDigit != 4 && lastDigit != 7)
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && isLucky(i))
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");

    return 0;
}