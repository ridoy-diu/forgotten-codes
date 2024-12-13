#include <stdio.h>
#include <string.h>

void capital(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 'a')
        {
            arr[i] = arr[i] - ('a' - 'A');
        }
    }
}

int main()
{
    char a[100], b[100];

    gets(a);
    gets(b);

    capital(a);
    capital(b);

    int x = strcmp(a, b);
    printf("%d\n", x);

    return 0;
}