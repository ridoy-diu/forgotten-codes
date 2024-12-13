#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    gets(s);

    int i, j, len = strlen(s);

    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (s[j] != '+')
            {
                if (s[j] > s[j + 2])
                {
                    char temp = s[j];
                    s[j] = s[j + 2];
                    s[j + 2] = temp;
                }
            }
        }
    }

    puts(s);

    return 0;
}