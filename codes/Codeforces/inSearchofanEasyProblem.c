#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    bool easy = true;

    while (n--)
    {

        int a;
        scanf("%d", &a);
        if (a == 1)
            easy = false;
    }
    if (easy)
        printf("easy\n");
    else
        printf("hard\n");

    return 0;
}