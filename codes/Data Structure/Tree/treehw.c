#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    char letter;
    struct Node *left;
    struct Node *right;
}node;

node *creat_node(char a){
    node *new_node = (node*)malloc(sizeof(node));
    new_node->letter = a;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

node *insert_left(node *root, char a){
    root->left = creat_node(a);
    return root->left;
}

node *insert_right(node *root, char a){
    root->right = creat_node(a);
    return root->right;
}

void inorder(node *root){
    if(root == NULL) return;
    inorder(root->left);
    printf("%c -> ", root->letter);
    inorder(root->right);
}

void preorder(node *root){
    if(root == NULL) return;
    printf("%c -> ", root->letter);
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%c -> ", root->letter);
}

int main(){
    node *root = creat_node('K');
    insert_left(root, 'F');
    insert_right(root, 'U');
    insert_left(root->left, 'P');
    insert_right(root->left, 'M');
    insert_left(root->right, 'S');
    insert_right(root->right, 'T');
    insert_left(root->left->right, 'A');
    insert_right(root->right->left, 'R');

    printf("\nInorder Traversal\n");
    inorder(root);
    printf("\n\nPreorder Traversal\n");
    preorder(root);
    printf("\n\nPostorder Traversal\n");
    postorder(root);

    return 0;
}