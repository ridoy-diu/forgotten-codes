#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("generated.txt", "w");
    char *st = "I Love You 3000";
    for (int i = 1; i <= 20; i++)
    {
        fprintf(ptr, "%d.\t%s\n", i, st);
    }
    fprintf(ptr, "\nThanks for using Vs code.\n");
    fclose(ptr);
    return 0;
}