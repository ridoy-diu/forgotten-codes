/// left shift with linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;


int main()
{
    node *a,*b,*c,*d,*start,*p;
    a = (node *)malloc(sizeof(node));
    b = (node *)malloc(sizeof(node));
    c = (node *)malloc(sizeof(node));
    d = (node *)malloc(sizeof(node));

    a->data = 1;
    b->data = 1;
    c->data = 1;
    d->data = 1;

    a->next = b;
    b->next = c ;
    c->next = d;
    d->next = NULL;
    start = a;

    p = start;
    while(p != NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");

    int n = 4;
    while(n--)
    {
        p = start;
        start = start->next;
        free(p);

        node *newNode = (node *)malloc(sizeof(node));
        newNode->data = 0;
        newNode->next = NULL;

        p = start;
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = newNode;

        p = start;

        while(p != NULL)
        {
            printf("%d ",p->data);
            p = p->next;
        }
        printf("\n");
    }

    return 0;
}




/// right shift with linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

int main()
{
    node *a,*b,*c,*d,*start,*p;
    a = (node *)malloc(sizeof(node));
    b = (node *)malloc(sizeof(node));
    c = (node *)malloc(sizeof(node));
    d = (node *)malloc(sizeof(node));

    a->data = 1;
    b->data = 1;
    c->data = 1;
    d->data = 1;

    a->next = b;
    b->next = c ;
    c->next = d;
    d->next = NULL;
    start = a;

    p = start;
    while(p != NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");

    int n = 4;
    while(n--)
    {
        node *newNode = (node *)malloc(sizeof(node));
        newNode->data = 0;
        newNode->next = start;
        start = newNode;

        p = start;
        while(p->next->next != NULL)
        {
            p = p->next;
        }
        free(p->next);
        p->next = NULL;
        p = start;
        while(p != NULL)
        {
            printf("%d ",p->data);
            p = p->next;
        }
        printf("\n");
    }

    return 0;
}





/// left rotate

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;


int main()
{
    node *a,*b,*c,*d,*start,*p;
    a = (node *)malloc(sizeof(node));
    b = (node *)malloc(sizeof(node));
    c = (node *)malloc(sizeof(node));
    d = (node *)malloc(sizeof(node));

    a->data = 1;
    b->data = 0;
    c->data = 0;
    d->data = 1;

    a->next = b;
    b->next = c ;
    c->next = d;
    d->next = NULL;
    start = a;

    p = start;
    while(p != NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");

    int n = 4;
    while(n--)
    {
        p = start;
        start = start->next;
        int n = p->data;
        free(p);

        node *newNode = (node *)malloc(sizeof(node));
        newNode->data = n;
        newNode->next = NULL;

        p = start;
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = newNode;

        p = start;

        while(p != NULL)
        {
            printf("%d ",p->data);
            p = p->next;
        }
        printf("\n");
    }

    return 0;
}