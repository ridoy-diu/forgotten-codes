#include<stdio.h>

int main()
{
    int i = 23;
    int *p = &i;
    printf("The address of i is %u\n", p);
    p++;
    printf("The address of i is %u\n", p);
    ++p;
    p++;
    printf("The address of i is %u\n", p);
    return 0;
}