#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    gets(s);
    if(s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] = s[0] - 32;
    }
    puts(s);
    return 0;
}   