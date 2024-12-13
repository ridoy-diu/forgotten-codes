#include <stdio.h>

// using iteration
int fibonacciUsingIteration(int n)
{
    if (n <= 1)
    {
        return n;
    }

    int a = 0, b = 1, current;

    for (int i = 2; i <= n; i++)
    {
        current = a + b;
        a = b;
        b = current;
    }

    return current;
}

// using recursion
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    printf("Enter the number of terms for Fibonacci series -\n");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms -\n", n);

    printf("Using Iteration - ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacciUsingIteration(i));
    }

    printf("\nUsing Recursion - ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}