#include <stdio.h>

// using iteration
int gcdUsingIteration(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

// using recursion
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

int main()
{
    int num1, num2;

    printf("Enter two numbers -\n");
    scanf("%d %d", &num1, &num2);

    int gcdIterative = gcdUsingIteration(num1, num2);
    printf("GCD using iterative method: %d\n", gcdIterative);

    int gcdRecursive = gcd(num1, num2);
    printf("GCD using recursive method: %d\n", gcdRecursive);

    return 0;
}
