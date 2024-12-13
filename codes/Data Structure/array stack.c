// stack push pop with array
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int top = -1;
int mystack[MAX];

int isEmpty()

{
    if(top == -1)
    {
        printf("\nStack is empty\n");
        return 1;
    }
    else
    {
        printf("\nStack is not empty\n");
        return 0;
    }
}

int isFull()

{
    if(top == MAX-1)
    {
        printf("\nStack is full\n");
        return 1;
    }
    else
    {
        printf("\nStack is not full\n");
        return 0;
    }
}

void push(int x)
{
    if(!isFull())
    {
        printf("\nPushing value %d\n",x);
        top++;
        mystack[top] = x;
    }
}

int pop()
{
    if(!isEmpty())
    {
        int x = mystack[top];
        mystack[top]=-1;
        top--;
        return x;
    }
}

void display()
{
    int i;
    if(isEmpty())
    {
        printf("\nThe stack is empty\n");
    }
    else
    {
        printf("\nPrinting values of stack\n");
        for(i=0; i<= top; i++)
        {
            printf("%d ",mystack[i]);
        }
    }
}

int main()
{
    int x;
    push(10);
    display();
    push(20);
    display();
    push(30);
    display();
    x = pop();
    printf("Popped Value: %d",x);
    display();
    push(40);
    display();

    return 0;
}