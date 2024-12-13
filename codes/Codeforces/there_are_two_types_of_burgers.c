#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int b, p, f, h, c;
        scanf("%d %d %d", &b, &p, &f);
        scanf("%d %d", &h, &c);

        int max_profit = 0;

        for (int i = 0; i <= p; i++)
        {
            for (int j = 0; j <= f; j++)
            {
                if (2 * i + 2 * j <= b)
                {
                    int profit = i * h + j * c;
                    if (profit > max_profit)
                    {
                        max_profit = profit;
                    }
                }
            }
        }

        printf("%d\n", max_profit);
    }

    return 0;
}
