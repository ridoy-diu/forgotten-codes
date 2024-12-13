#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *previous;
    struct node *next;
};
int main()
{
    struct node *n1, *n2, *n3;
    n1 = (struct node *)malloc(sizeof(struct node));
    n2 = (struct node *)malloc(sizeof(struct node));
    n3 = (struct node *)malloc(sizeof(struct node));

    n1->data = 2;
    n2->data = 3;
    n3->data = 4;

    n1->previous = NULL;
    n2->previous = n1;
    n3->previous = n2;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    struct node *left = n1;
    struct node *right = n3;

    struct node *p;
    p = left;
    while(p!= NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
    p = right;
    while(p!= NULL)
    {
        printf("%d\n",p->data);
        p=p->previous;
    }
    return 0;
}