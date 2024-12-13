// basic pointer 
#include<stdio.h>
// & = 'address of' operator
// * = value at address
// %d = %u 
// value of j = address of i
int main()
{
    int i = 10;
    int *j = &i; // j will now store the address the i
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", j);
    printf("The address of i is %d\n", j);
    printf("The value of i is %u\n", *(&i));
    printf("The address of j is %d\n", &j);
    printf("The value of j is %d\n", *(&j));
    printf("The value of j is %u\n", *(&j));
    return 0;
}
