#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s", s);

    int len = strlen(s);

    int output = 0;

    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            output = 1;
            break;
        }
    }
    if (output)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}