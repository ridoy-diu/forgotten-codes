#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int home[n], away[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &home[i], &away[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (home[i] == away[j])
                {
                    count++;
                }
            }
        }
    }
    printf("%d\n", count);
    return 0;
}