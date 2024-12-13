// // linked list : insertion at the beginning
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct Node
// {
//     int data;
//     struct Node *next;
// } node;
// node *start; // Global variable, can be accessed anywhere
// void Insert(int x)
// {
//     node *temp = (node *)malloc(sizeof(node));
//     temp->data = x;
//     temp->next = start;
//     start = temp;
// }
// void Print()
// {
//     node *p = start;
//     printf("The List is: ");
//     while (p != NULL)
//     {
//         printf(" %d", p->data);
//         p = p->next;
//     }
//     printf("\n");
// }
// int main()
// {
//     start = NULL; // empty list
//     int n, i, x;
//     printf("How many numbers?\n");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         printf("Enter the number: ");
//         scanf("%d", &x);
//         Insert(x);
//         Print();
//     }
//     return 0;
// }

// // linked list : insertion at nth position
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct Node
// {
//     int data;
//     struct Node *next;
// } node;
// node *start;
// void Print()
// {
//     node *p = start;
//     while (p != NULL)
//     {
//         printf("%d ", p->data);
//         p = p->next;
//     }
//     printf("\n");
// }
// void Insert(int data, int n)
// {
//     node *temp = (node *)malloc(sizeof(node));
//     temp->data = data;
//     temp->next = NULL;
//     if (n == 1)
//     {
//         temp->next = start;
//         start = temp;
//         return;
//     }
//     node *p = start;
//     for (int i = 0; i < n - 2; i++)
//     {
//         p = p->next;
//     }
//     temp->next = p->next;
//     p->next = temp;
// }
// int main()
// {
//     start = NULL;
//     Insert(12, 1);
//     Insert(2, 1);
//     Insert(35, 1);
//     Insert(132, 2);
//     Insert(15, 1);
//     Print(); // 15,35,132,2,12
//     return 0;
// }

// // linked list : deletion  at nth position
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct Node
// {
//     int data;
//     struct Node *next;
// } node;
// node *start;
// void Insert(int data)
// {
//     node *temp = (node *)malloc(sizeof(node));
//     temp->data = data;
//     temp->next = NULL;
//     if (start == NULL)
//     {
//         start = temp;
//     }
//     else
//     {
//         node *p = start;
//         while (p->next != NULL)
//         {
//             p = p->next;
//         }
//         p->next = temp;
//     }
// }
// void Delete(int n)
// {
//     if (start == NULL)
//     {
//         printf("List is empty\n");
//         return;
//     }
//     if (n == 1)
//     {
//         node *temp = start;
//         start = start->next;
//         free(temp);
//         return;
//     }
//     node *p = start;
//     int i;
//     for (i = 0; i < n - 2 && p != NULL; i++)
//     {
//         p = p->next;
//     }
//     if (p == NULL || p->next == NULL)
//     {
//         printf("Invalid position\n");
//         return;
//     }
//     node *q = p->next;
//     p->next = p->next->next;
//     free(q);
// }
// void Print()
// {
//     node *p = start;
//     while (p != NULL)
//     {
//         printf("%d ", p->data);
//         p = p->next;
//     }
//     printf("\n");
// }
// int main()
// {
//     start = NULL; // Initialize the start pointer to NULL
//     Insert(1);
//     Insert(2);
//     Insert(3);
//     Insert(4);
//     Insert(5);
//     Print();
//     Delete(3);
//     Print();
//     Insert(25);
//     Print();
//     Insert(222);
//     Insert(98);
//     Print();
//     Delete(5);
//     Print();
//     return 0;
// }

