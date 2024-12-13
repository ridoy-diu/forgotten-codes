#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, len, count = 0;
    char s[100];
    gets(s);

    len = strlen(s);

    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (s[i] == s[j])
            {
                count++;
                break;
            }
        }
    }

    len -= count;

    if (len % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }

    return 0;
}