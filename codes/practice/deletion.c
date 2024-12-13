// deletion

#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} node;
node *head = NULL;
void Print()
{
    node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
void Delete_at_beginning()
{
    if (head == NULL)
    {
        printf("List is Empty.\n");
        return;
    }
    node *temp = head;
    head = head->next;
    free(temp);
    Print();
}
void Delete_at_end()
{
    if (head == NULL)
    {
        printf("List is Empty.\n");
        return;
    }
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        Print();
        return;
    }
    node *p = head;
    while (p->next->next != NULL)
    {
        p = p->next;
    }
    free(p->next);
    p->next = NULL;
    Print();
}
void Delete_at_Nth_position(int position)
{
    if (position <= 0)
    {
        printf("Invalid position to delete.\n");
        return;
    }
    node *p = head;
    int i = 1;
    while (i < position - 1 && p != NULL)
    {
        p = p->next;
        i++;
    }
    if (p == NULL)
    {
        printf("Invalid position to delete.\n");
        return;
    }
    node *temp = p->next;
    p->next = p->next->next;
    free(temp);
    Print();
}
int main()
{
    node *a, *b, *c, *d, *e;
    a = (node *)malloc(sizeof(node));
    b = (node *)malloc(sizeof(node));
    c = (node *)malloc(sizeof(node));
    d = (node *)malloc(sizeof(node));
    e = (node *)malloc(sizeof(node));
    a->data = 10;
    b->data = 20;
    c->data = 30;
    d->data = 40;
    e->data = 50;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;
    head = a;
    Print();
    Delete_at_beginning();
    Delete_at_Nth_position(3);
    Delete_at_end();
    Delete_at_beginning();
    Delete_at_end();
    Delete_at_end();
    return 0;
}