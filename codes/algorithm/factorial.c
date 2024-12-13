#include <stdio.h>

// using iteration
unsigned int factorial(unsigned int num)
{
    int result = 1;
    for (int i = 2; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

// using recursion
unsigned int factorialUsingRecursion(unsigned int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }

    return num * factorial(num - 1);
}

int main()
{
    int num;
    printf("Enter number - \n");
    scanf("%d", &num);

    printf("The factoral of %d is %d (iteration)\n", num, factorial(num));
    printf("The factoral of %d is %d (recursion)\n", num, factorialUsingRecursion(num));

    return 0;
}