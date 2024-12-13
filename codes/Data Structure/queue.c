// /// Queue with array

// #include <stdio.h>
// #include <stdlib.h>
// #define maxSize 5

// int front = -1, rear = -1;
// int queue[maxSize];

// void enqueue()
// {
//     int item;
//     printf("\nEnter the element\n");
//     scanf("%d", &item);
//     if(rear == maxSize - 1)
//     {
//         printf("\nOVERFLOW\n");
//         return;
//     }
//     if(front == -1 && rear == -1)
//     {
//         front = 0;
//         rear = 0;
//     }
//     else
//     {
//         rear = rear + 1;
//     }
//     queue[rear] = item;
//     printf("\nValue inserted\n");
// }

// void dequeue()
// {
//     int item;
//     if(front == -1)
//     {
//         printf("\nUNDERFLOW\n");
//         return;
//     }
//     else
//     {
//         item = queue[front];
//         if(front == rear)
//         {
//             front = -1;
//             rear = -1;
//         }
//         else
//         {
//             front = front + 1;
//         }
//         printf("\nValue deleted: %d",item);
//     }
// }

// void display()
// {
//     int i;
//     if(rear == -1)
//     {
//         printf("\nEmpty queue!!\n");
//     }
//     else
//     {
//         printf("\nQueue:\n");
//         for(i = front; i <= rear; i++)
//         {
//             printf("%d ",queue[i]);
//         }
//         printf("\n");
//     }
// }

// void main()
// {
//     enqueue();
//     display();
//     enqueue();
//     display();
//     dequeue();
//     display();
// }



/// Queue with linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *front = NULL, *rear = NULL;

void enqueue(int k)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = k;
    temp->next = NULL;

    if(rear == NULL)
    {
        front = temp;
        rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void dequeue()
{
    if(front == NULL)
    {
        printf("Queue is empty!!");
        return;
    }

    node *temp = front;
    front = front->next;
    free(temp);

    if(front == NULL)
    {
        rear = NULL;
    }
}

void display()
{
    node *p = front;
    printf("QUEUE ELEMENTS:\n");
    while(p != NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    enqueue(10);
    display();
    enqueue(20);
    display();
    dequeue();
    display();
    enqueue(30);
    display();
    enqueue(40);
    display();
    dequeue();
    display();
    enqueue(50);
    enqueue(60);
    enqueue(70);
    display();
    dequeue();
    display();

    return 0;
}
