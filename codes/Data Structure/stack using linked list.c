//using linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *previous;
}node;

node *top = NULL;

void push(int val)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = val;
    newnode->previous = top;
    top = newnode;
}
void pop()
{
    node *p;
    if(top == NULL)
    {
        printf("Stack is empty!\n");
    }
    else
    {
        printf("Popped element: %d\n",top->data);
        p = top;
        top = top->previous;
        free(p);
    }
}

void printStack()
{
    node *p = top;
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p = p->previous;
    }
    printf("\n");
}

int main()
{
    printf("Initial stack\n");
    printStack();

    push(10);
    printf("After the push, the new stack\n");
    printStack();

    push(20);
    printf("After the push, the new stack\n");
    printStack();

    push(30);
    printf("After the push, the new stack\n");
    printStack();

    pop();
    printf("After the pop, the new stack\n");
    printStack();

    pop();
    printf("After the pop, the new stack\n");
    printStack();

    return 0;
}