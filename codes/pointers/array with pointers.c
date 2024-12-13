#include<stdio.h>

int main()
{
    int marks[10];
    int *p = &marks[0];
    for(int i = 0; i<10; i++)
    {
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d", p);
        p++; // increments the address value of marks
    }
    for(int i = 0; i<10; i++)
    {
        printf("Student %d got %d marks.\n", i+1, marks[i]);
    }
    return 0;
}