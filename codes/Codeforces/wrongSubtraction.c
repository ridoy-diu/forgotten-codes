#include <stdio.h>

int main()
{
    long long int n;
    int k;
    scanf("%lld %d", &n, &k);
    int count = 0;
    for (int i = 0; i < k; i++)
    {
        int lastDigit = n % 10;

        if (lastDigit == 0)
        {
            n /= 10;
        }
        else if (lastDigit != 0)
        {
            n--;
        }
    }
    printf("%lld", n);
    return 0;
}
