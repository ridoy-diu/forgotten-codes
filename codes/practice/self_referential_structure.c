#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int x;
    struct Node *p;
    struct Node *q;
} node;

int main(void)
{
    node *head = (node *)malloc(sizeof(node));

    head->p = (node *)malloc(sizeof(node));
    head->q = (node *)malloc(sizeof(node));
    head->p->q = (node *)malloc(sizeof(node));

    head->x = 7;

    head->p->x = 11;
    head->q->x = 9;
    head->p->q->x = 15;
    // head->q->p->x = 15;

    head->p->q->p = head->q->p;

    head->p->q->q = NULL;
    head->q->q = NULL;

    return 0;
}