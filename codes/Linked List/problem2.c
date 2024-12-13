#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *next;
}node;

int main()
{
    int i, n, k;
    printf("ENTER NUMBER OF NODES: ");
    scanf("%d", &n);

    node **array = (node **)malloc(n * sizeof(node *));

    printf("Enter node values: ");

    for(i = 0; i < n; i++)
    {
        array[i] = (node *)malloc(sizeof(node));
        scanf("%d", &array[i]->data);
    }

    printf("ENTER POSITION: ");
    scanf("%d", &k);

    for(i = 0; i < n - 1; i++)
    {
        array[i]->next = array[i + 1];
    }
    array[n - 1]->next = NULL;

    printf("\n\nINPUT\n");

    node *start = array[0];
    node *p = start;
    while(p != NULL)
    {
        printf("%d", p->data);
        if (p->next != NULL)
        {
            printf(" -> ");
        }
        p = p->next;
    }
    printf("\n%d", k);

    printf("\n\nOUTPUT\n");

    printf("\n");

    return 0;
}
