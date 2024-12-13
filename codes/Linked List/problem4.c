///problem 4

#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *left, *right;
}node;

node *creatnode(int value)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

int sumofoddnodes(node *root)
{
    if(root == NULL) return;
    int sum = 0;

    if(root->data % 2 != 0)
    {
        sum += root->data;
    }

    sum += sumofoddnodes(root->left);
    sum += sumofoddnodes(root->right);

    return sum;
}

int main(void)
{
    node *root = creatnode(7);
    root->left = creatnode(3);
    root->right = creatnode(10);
    root->left->left = creatnode(1);
    root->left->right = creatnode(6);
    root->left->right->left = creatnode(4);
    root->left->right->right = creatnode(9);
    root->right->right = creatnode(14);
    root->right->right->left = creatnode(13);

    int sum = sumofoddnodes(root);

    printf("Sum: %d\n", sum);

    return 0;
}
