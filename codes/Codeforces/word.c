#include <stdio.h>
#include <string.h>
int main()
{
    char s[106];

    char upper[106];
    char lower[106];

    gets(s);

    strcpy(upper, s);
    strcpy(lower, s);

    int len = strlen(s);
    int capital = 0, small = 0;

    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            capital++;
            lower[i] = s[i] + 32;
        }

        if (s[i] >= 'a' && s[i] <= 'z')
        {
            small++;
            upper[i] = s[i] - 32;
        }
    }

    if (capital > small)
        puts(upper);
    else
        puts(lower);

    return 0;
}