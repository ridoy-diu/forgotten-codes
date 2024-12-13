#include <stdio.h>
#include <string.h>

int can_say_hello(char s[])
{
    int index = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == "hello"[index])
        {
            index++;
        }
    }

    return index == 5;
}

// int canSayHello(char s[]) {
//     char hello[] = "hello";
//     int i, j;
//     for (i = 0, j = 0; s[i] != '\0' && j < 5; i++) {
//         if (s[i] == hello[j]) {
//             j++;  // Move to the next character in "hello"
//         }
//     }
//     return j == 5;  // Vasya managed to say hello if j reaches 5
// }

int main()
{
    char s[101];
    scanf("%s", s);

    if (can_say_hello(s))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}