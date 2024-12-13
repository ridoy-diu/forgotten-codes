#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *start = NULL;
node *newnode, *p;

void print()
{
    node *p = start;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void beginnig_insertion()
{
    // for insertion at the beginnig
    newnode = (node *)malloc(sizeof(node));
    if (newnode == NULL)
    {
        perror("memory allocation failed");
        return 1;
    }
    printf("Enter new node value for adding at beginning : ");
    scanf("%d", &newnode->data);
    newnode->next = start;
    start = newnode;
    print();
}

void ending_insertion()
{
    // for insertion at the end
    newnode = (node *)malloc(sizeof(node));
    if (newnode == NULL)
    {
        perror("memory allocation failed");
        return 1;
    }
    printf("Enter new node value for adding at the end: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    node *current = start;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newnode;
    print();
}

void k_insertion()
{
    // for insertion a k position;
    int k;
    printf("Enter position for inserting a new node : ");
    scanf("%d", &k);
    newnode = (node *)malloc(sizeof(node));
    printf("Enter new node 3 value : ");
    scanf("%d", &newnode->data);
    p = start;
    for (int i = 1; i < k - 1; i++)
    {
        if (p->next != NULL)
        {
            p = p->next;
        }
    }
    newnode->next = p->next;
    p->next = newnode;
    print();
}

int main()
{
    int n;
    printf("Enter number of nodes : ");
    scanf("%d", &n);
    node *a[50];
    printf("Enter data of nodes : ");
    for (int i = 0; i < n; i++)
    {
        a[i] = (node *)malloc(sizeof(node));
        if (a[i] == NULL)
        {
            printf("Memory allocation failed.\n");
            for (int j = 0; j < i; j++)
            {
                free(a[j]);
            }
            return 1;
        }
        scanf("%d", &a[i]->data);
    }
    for (int i = 0; i < n - 1; i++)
    {
        a[i]->next = a[i + 1];
    }
    a[n - 1]->next = NULL;
    start = a[0];
    print();

    beginnig_insertion();
    ending_insertion();
    k_insertion();


    // free allocated memory
    for (int i = 0; i < n; i++)
    {
        free(a[i]);
    }
    free(newnode);
    return 0;
}
