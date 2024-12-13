#include <stdio.h>
#include <string.h>

int main()
{
    char s[105];
    gets(s);
    int len = strlen(s);
    int count = 1;
    for (int i = 0; i < len - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
            if (count == 7)
                break;
        }
        else
            count = 1;
    }
    if (count == 7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}