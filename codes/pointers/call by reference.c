/// call by reference
#include<stdio.h>
void calculation(int a, int b, int *sum, int *sub, int *mul, float *div)
{
    *sum = a + b;
    *sub = a - b;
    *mul = a * b;
    *div = (float)a / b;
}
int main()
{
    int a, b, sum, sub, mul;
    float div;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    calculation(a, b, &sum, &sub, &mul, &div);
    printf("The value of addition is %d\n", sum);
    printf("The value of subtraction is %d\n", sub);
    printf("The value of multiplication is %d\n", mul);
    printf("The value of division is %.2f\n", div);
    return 0;
}