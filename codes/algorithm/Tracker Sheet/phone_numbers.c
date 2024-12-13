#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[101];
    scanf("%s", s);

    int length = 0;
    while (s[length] != '\0')
    {
        length++;
    }

    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (s[i] == '8')
        {
            count++;
        }
    }

    int total = count < n / 11 ? count : n / 11;

    printf("%d\n", total);

    return 0;
}