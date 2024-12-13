#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;
int main()
{
    node *node1, *node2, *node3, *node4;
    node1 = (node *)malloc(sizeof(node));
    node2 = (node *)malloc(sizeof(node));
    node3 = (node *)malloc(sizeof(node));
    node4 = (node *)malloc(sizeof(node));
    node1->data = 1;
    node2->data = 2;
    node3->data = 3;
    node4->data = 4;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;
    node *start = node1;
    node *current = start, *prev = NULL, *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;

        prev = current;
        current = next;
    }
    start = prev;
    current = start;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    return 0;
}