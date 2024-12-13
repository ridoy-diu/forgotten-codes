#include <stdio.h>
#include <string.h>

int main()
{
    char a[102], b[102];
    scanf("%s %s", a, b);
    for (int i = 0; i < strlen(a); i++)
    {
        if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1'))
        {
            b[i] = '1';
        }
        else
        {
            b[i] = '0';
        }
    }
    puts(b);
    return 0;
}