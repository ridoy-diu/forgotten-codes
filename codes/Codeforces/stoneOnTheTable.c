#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char arr[n + 1];
    scanf("%s", arr);

    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}