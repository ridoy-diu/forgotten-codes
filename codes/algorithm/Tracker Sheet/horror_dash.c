#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int max = 0;
        for (int i = 1; i <= n; i++)
        {
            int speed;
            scanf("%d", &speed);
            if (speed >= max)
            {
                max = speed;
            }
        }
        printf("Case %d: %d\n", i, max);
    }
    return 0;
}