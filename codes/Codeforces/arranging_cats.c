#include <stdio.h>
#include <string.h>

int operation(int n, char s[], char f[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != f[i])
        {
            count++;
            if (s[i] == '1' && f[i] == '0')
            {
                // Remove a cat from box i
                s[i] = '0';
            }
            else if (s[i] == '0' && f[i] == '1')
            {
                // Add a cat to box i
                s[i] = '1';
            }
        }
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int size;
        scanf("%d", &size);

        char s[size + 1], f[size + 1];
        scanf("%s", s);
        scanf("%s", f);


        int result = operation(size, s, f);
        printf("%d\n", result - 1);
    }
    return 0;
}