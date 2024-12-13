///problem 3

#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *next;
} node;

void removeDuplicates(node *start)
{
    node *p = start;
    while(p != NULL)
    {
        node *q = p;
        while (q->next != NULL)
        {
            if (q->next->data == p->data)
            {
                node *temp = q->next;
                q->next = q->next->next;
                free(temp);
            }
            else
            {
                q = q->next;
            }
        }
        p = p->next;
    }
}

int main()
{
    int i, n;
    printf("ENTER NUMBER OF NODES: ");
    scanf("%d", &n);

    node* start = NULL;

    node **array = (node **)malloc(n * sizeof(node *));

    printf("Enter node values: ");

    for(i = 0; i < n; i++)
    {
        array[i] = (node *)malloc(sizeof(node));
        scanf("%d", &array[i]->data);
    }

    for(i = 0; i < n - 1; i++)
    {
        array[i]->next = array[i + 1];
    }
    array[n - 1]->next = NULL;

    printf("\n\nINPUT\n");

    start = array[0];
    node *p = start;

    while(p != NULL)
    {
        printf("%d", p->data);
        if(p->next != NULL)
        {
            printf("->");
        }
        p = p->next;
    }

    removeDuplicates(start);

    printf("\n\nOUTPUT\n");

    p = start;
    while(p != NULL)
    {
        printf("%d", p->data);
        if(p->next != NULL)
        {
            printf("->");
        }
        p = p->next;
    }

    return 0;

}
