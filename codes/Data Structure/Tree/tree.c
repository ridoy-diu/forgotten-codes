
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *left, *right;
} node;

node *create_node(int value)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->value = value;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

node *insert_left(node *root, int value)
{
    root->left = create_node(value);
    return root->left;
}

node *insert_right(node *root, int value)
{
    root->right = create_node(value);
    return root->right;
}

void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->value);
    inorder(root->right);
}

void preorder(node *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->value);
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->value);
}

int main()
{
    node *root = create_node(1);
    insert_left(root, 12);
    insert_right(root, 9);

    insert_left(root->left, 5);
    insert_right(root->left, 6);

    printf("Inorder Traversal:\n");
    inorder(root);
    printf("\n\nPreorder Traversal:\n");
    preorder(root);
    printf("\n\nPostorder Traversal:\n");
    postorder(root);

    return 0;
}
