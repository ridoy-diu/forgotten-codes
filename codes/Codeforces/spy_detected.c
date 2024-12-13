#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int m;
        scanf("%d", &m);

        int a[100];
        int b[105] = {0};

        for (int i = 0; i < m; i++)
        {
            scanf("%d", &a[i]);
            b[a[i]]++;
        }

        for (int i = 0; i < 105; i++)
        {
            if (b[a[i]] == 1)
            {
                printf("%d\n", i + 1);
                break;
            }
        }
    }

    return 0;
}