#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
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

    node1->data = 11;
    node2->data = 12;
    node3->data = 13;
    node4->data = 14;
    node5->data = 15;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;
    start = node1;

    // a new node insertion at the end
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = 16;
    newNode->next=NULL;
    p = start;
    while (p->next != NULL)  // condition changes
    {
        p = p->next;
    }
    p->next = newNode; // last node assigned to previous node 

    p = start;

    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }

    return 0;
}
