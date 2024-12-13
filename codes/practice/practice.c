#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Result
{
    float cgpa;
    int credit;
} re;

typedef struct student
{
    int id;
    char name[50];
    re result;
    struct student *next;

} st;

int main()
{
    st *node = (st *)malloc(sizeof(st));

    if (node == NULL)
    {
        printf("Memory Allocation Failed.\n");
        return 1;
    }

    node->id = 1148;
    strcpy(node->name, "Ridoy");
    node->result.cgpa = 3.79;
    node->result.credit = 19;

    printf("%d, %s, %.2f, %d\n", node->id, node->name, node->result.cgpa, node->result.credit);

    free(node);

    return 0;
}