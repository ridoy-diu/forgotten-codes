#include <stdio.h>

int main()
{
    long long int n, m, a, l, b;
    scanf("%lld %lld %lld", &n, &m, &a);
    l = n / a;
    b = m / a;

    if (n % a != 0)
    {
        l++;
    }
    if (m % a != 0)
    {
        b++;
    }

    printf("%lld\n", l * b);

    return 0;
}