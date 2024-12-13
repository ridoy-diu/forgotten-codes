#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int age;
    char name[50];
    struct NODE *next;
} node;

int main()
{
    int i, n;
    node *p, *start;

    printf("ENTER NUMBER OF STUDENTS: ");
    scanf("%d", &n);

    node **array = (node **)malloc(n * sizeof(node *));
    if (array == NULL)
    {
        fprintf(stderr, "MEMORY ALLOCATION FAILED\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        array[i] = (node *)malloc(sizeof(node));

        printf("Age of student - %d: ", i + 1);
        scanf("%d", &array[i]->age);

        printf("Name: ");
        scanf(" %49[^\n]", array[i]->name);
    }

    for (i = 0; i < n - 1; i++)
    {
        array[i]->next = array[i + 1];
    }
    array[n - 1]->next = NULL;

    printf("\n*PRINTING THE LIST OF THE STUDENTS*\n");

    start = array[0];
    p = start;

    while (p != NULL)
    {
        printf("Age: %d, Name: %s\n", p->age, p->name);
        p = p->next;
    }
    printf("\n");

    free(array);

    return 0;
}
