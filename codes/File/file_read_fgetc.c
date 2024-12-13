#include <stdio.h>

int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("getcdemo.txt", "r");
    if (ptr == NULL)
    {
        printf("This file does not exist.\n");
        return 1;  //exit the program
    }
    else
    {
        // c = fgetc(ptr);
        while (c != EOF)
        {
            printf("%c", c);
            c = fgetc(ptr);
        }
    }

    return 0;
}