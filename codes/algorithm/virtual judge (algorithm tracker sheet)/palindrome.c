#include <stdio.h>

int reverse(int m)
{
    int lastDigit;
    int rev = 0;
    while (m > 0)
    {
        lastDigit = m % 10;
        rev = (rev * 10) + lastDigit;
        m /= 10;
    }
    return rev;
}

int main()
{
    int n;
    scanf("%d", &n);

    int i = 1;
    while (n--)
    {
        long long int m;
        scanf("%lld", &m);

        int num = reverse(m);
        
        if (m == num)
        {
            printf("Case %d: Yes\n", i);
        }
        else
        {
            printf("Case %d: No\n", i);
        }

        i++;
    }

    return 0;
}