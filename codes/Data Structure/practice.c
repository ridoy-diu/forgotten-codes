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
        printf("%d\t", p->data);
        p = p->next;
    }
    printf("\n");
}
void Insert_at_beginning(int n)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = n;
    newnode->next = head;
    head = newnode;
    Print();
}
void Insert_at_end(int n)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = n;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = newnode;
    }
    Print();
}
void Insert_at_Nth_position(int n, int position)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = n;
    newnode->next = NULL;
    if (position == 1)
    {
        newnode->next = head;
        head = newnode;
        return;
    }
    node *p = head;
    for (int i = 2; i < position; i++)
    {
        if (p->next != NULL)
        {
            p = p->next;
        }
    }
    newnode->next = p->next;
    p->next = newnode;
    Print();
}
int main()
{
    Insert_at_beginning(100);
    Insert_at_beginning(200);
    Insert_at_end(12);
    Insert_at_end(22);
    Insert_at_Nth_position(1148, 3);
    Insert_at_end(25);
    Insert_at_end(30);
    Insert_at_beginning(4);
    return 0;
}