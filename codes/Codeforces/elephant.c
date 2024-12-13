#include <stdio.h>

int main()
{
    long long int x;
    scanf("%lld", &x);

    long long int a = x % 5;

    if (a == 0)
    {
        printf("%lld\n", x / 5);
    }
    else
    {
        printf("%lld\n", x / 5 + 1);
    }

    return 0;
}