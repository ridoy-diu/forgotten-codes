#include <stdio.h>

int main()
{
    FILE *ptr;
    int num,num2;

    ptr = fopen("sample.txt", "r");

    if (ptr == NULL)
    {
        printf("This file does not exist.\n");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("The value of num1 is %d\n", num);
        printf("The value of num2 is %d\n", num2);
    }

    return 0;
}