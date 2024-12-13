// Linked List: Insertion and Deletion

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

void Insert_after_Nth_position(int n, int position)
{
    if (position <= 0)
    {
        printf("Invalid position to insert.\n");
        return;
    }
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = n;
    newnode->next = NULL;
    node *p = head;
    int i = 1;
    while (i < position && p != NULL)
    {
        p = p->next;
        i++;       
    }
    if (p == NULL)
    {
        printf("Invalid position to insert.\n");
        return;
    }
    newnode->next = p->next;
    p->next = newnode;
    Print();
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
    Insert_at_beginning(25);
    Insert_at_beginning(35);
    Insert_at_end(45);
    Insert_at_end(10);
    Insert_after_Nth_position(18, 2);
    Insert_at_end(30);
    Insert_after_Nth_position(1148, 1);
    Insert_after_Nth_position(42, 0);
    Delete_at_beginning();
    Delete_at_beginning();
    Delete_at_end();
    return 0;
}
