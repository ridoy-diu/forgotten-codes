#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    char name[30];
    struct node *next;
};
int main()
{
    struct node *node1, *node2, *node3, *node4, *node5, *start, *p;

    node1 = (struct node *)malloc(sizeof(struct node));
    node2 = (struct node *)malloc(sizeof(struct node));
    node3 = (struct node *)malloc(sizeof(struct node));
    node4 = (struct node *)malloc(sizeof(struct node));
    node5 = (struct node *)malloc(sizeof(struct node));

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    start = node1;

    p = start;

    while (p != NULL)
    {
        scanf("%d %[^\n]s", &p->data, p->name);
        p = p->next;
    }

    printf("\n\n");

    p = start;

    while (p != NULL)
    {
        printf("%d %s\n", p->data, p->name);
        p = p->next;
    }

    return 0;
}
