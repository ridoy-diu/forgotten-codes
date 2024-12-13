#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

int main()
{
    int n;
    printf("Enter number of nodes:");
    scanf("%d",&n);

    node *arr[20], *start,*p;

    for(int i = 0; i<n; i++)
    {
        arr[i] = (node *)malloc(sizeof(node));
        scanf("%d",&arr[i]->data);
    }
    for(int i = 0; i<n-1; i++)
    {
        arr[i]->next = arr[i+1];
    }
    arr[n-1]->next = NULL;

    start = arr[0];
    p = start;
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }

    return 0;
}
