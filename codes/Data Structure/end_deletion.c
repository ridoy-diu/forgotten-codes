#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *n1, *n2, *n3, *n4, *start, *p;
    n1 = (struct node *)malloc(sizeof(struct node));
    n2 = (struct node *)malloc(sizeof(struct node));
    n3 = (struct node *)malloc(sizeof(struct node));
    n4 = (struct node *)malloc(sizeof(struct node));

    n1->data = 4;
    n2->data = 5;
    n3->data = 6;
    n4->data = 7;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;
    start = n1;

    p = start;
    while (p->next->next != NULL)
    {
        p = p->next;
    }
    free(p->next);
    p->next = NULL;

    // printf("%d\n",n4->data); //verify

    p = start;
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }

    return 0;
}