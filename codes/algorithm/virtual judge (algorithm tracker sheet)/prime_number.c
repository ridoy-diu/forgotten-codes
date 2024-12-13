#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    int div = 2;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Not a Prime Number.\n");
        return 0;
    }

    while (div <= sqrt(n))
    {
        if ((n % div) == 0)
        {
            printf("Not a Prime Number.\n");
            return 0;
        }
        div++;
    }

    printf("Prime Number.\n");

    return 0;
}
