#include <stdio.h>
#include <stdlib.h>

struct node
{
    int age;
    struct node *next;
};

int main()
{
    struct node *node1, *node2, *node3, *node4, *node5, *start, *p;

    node1 = (struct node *) malloc(sizeof(struct node));
    node2 = (struct node *) malloc(sizeof(struct node));
    node3 = (struct node *) malloc(sizeof(struct node));
    node4 = (struct node *) malloc(sizeof(struct node));
    node5 = (struct node *) malloc(sizeof(struct node));

//    node1->age = 13;
//    node2->age = 21;
//    node3->age = 34;
//    node4->age = 32;
//    node5->age = 45;

//    scanf("%d",&node1->age);
//    scanf("%d",&node2->age);
//    scanf("%d",&node3->age);
//    scanf("%d",&node4->age);
//    scanf("%d",&node5->age);



    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;
    start = node1;
    p = start;

    while(p!= NULL)
    {
        scanf("%d",&p->age);
        p = p->next;
    }

    p = start;
    while(p!= NULL)
    {
        printf("%d\n",p->age);
        p = p->next;
    }

    return 0;

}
