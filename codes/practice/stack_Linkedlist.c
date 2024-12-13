#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *previous;
}node;
node *top = NULL;
void Print()
{
    node *p = top;
    while(p != NULL)
    {
        printf("%d ",p->data);
        p = p->previous;
    }
    printf("\n");
}
void Push(int n)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = n;
    new_node->previous=top;
    top = new_node;
    Print();
}
void Pop()
{
    node *p;
    if(top == NULL)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        p = top;
        printf("Popped element: %d\n",p->data);
        top = top->previous;
        free(p);
    }
    Print();
}

int main()
{
    
    Pop();
    Push(100);
    Push(148);
    Pop();
    return 0;
}