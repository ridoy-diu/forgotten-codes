#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Node
{
    int StudentID;
    float Marks;
    char Section;
    struct Node *next;
} node;
node *start = NULL;
void Insert(int id, float marks, char section)
{
    node *newnode = (node *)malloc(sizeof(node));
    if (newnode == NULL)
    {
        printf("Memory Allocation Failed.\n");
        exit(1);
    }
    newnode->StudentID = id;
    newnode->Marks = marks;
    newnode->Section = section;
    newnode->next = NULL;
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        node *p = start;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = newnode;
    }
}
void Print()
{
    node *p = start;
    while (p != NULL)
    {
        printf("%d ", p->StudentID);
        printf("%.2f ", p->Marks);
        printf("%c ", p->Section);
        p = p->next;
    }
    printf("\n");
}
void Searching(int id)
{
    bool result = false;
    node *p = start;
    while (p != NULL)
    {
        if (p->StudentID == id)
        {
            result = true;
            break;
        }
        p = p->next;
    }
    if (result)
    {
        printf("Student's Information Found.\n");
    }
    else
    {
        printf("Student's Information Not Found.\n");
    }
}
int main()
{
    start = NULL;
    int i, id;
    float marks;
    char section;
    for (i = 0; i < 3; i++)
    {
        printf("Enter Student ID: ");
        scanf("%d", &id);
        printf("Enter Student's Marks: ");
        scanf("%f", &marks);
        printf("Enter Student's Section: ");
        scanf(" %c", &section);
        Insert(id, marks, section);
        Print();
    }
    int find_id;
    printf("\nEnter Student ID to search: ");
    scanf("%d", &find_id);
    Searching(find_id);
    node *p = start;
    while (p != NULL)
    {
        node *temp = p;
        p = p->next;
        free(temp);
    }
    return 0;
}