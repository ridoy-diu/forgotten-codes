#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, len;
    char s[100], a[200];
    gets(s);
    len = strlen(s);

    for (i = 0, j = 0; i < len; i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'y' && s[i] != 'Y')
        {
            a[j] = '.';
            j++;

            if (s[i] >= 65 && s[i] <= 90)
            {
                a[j] = s[i] + 32;
                j++;
            }
            else
            {
                a[j] = s[i];
                j++;
            }
        }
    }
    a[j] = '\0';

    puts(a);

    return 0;
}