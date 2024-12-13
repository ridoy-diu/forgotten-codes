#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node 
{
    char data;
    struct node *next;
}node;
 
node *top = NULL;
 
int isEmpty() 
{
    return (top == NULL);
}
void push(char c) 
{
    node *newNode = (node *) malloc(sizeof(node));
    if(newNode==NULL)
    {
        printf("Stack Overflow!\n");
        exit(0);
    }
    newNode->data = c;
    newNode->next = top;
    top = newNode;
}
 
char pop() 
{
    if (isEmpty()) 
    {
        printf("Stack underflow!\n");
        exit(0);
    }
    node *temp = top;
    char c = temp->data;
    top = top->next;
    free(temp);
    return c;
}
 
int isBalanced(char *exp) 
{
    for (int i = 0; i < strlen(exp); i++) 
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{') 
        {
            push(exp[i]);
        } 
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}') 
        {
            if (isEmpty()) 
            {
                return 0;
            } 
            else if ((exp[i] == ')' && pop() != '(') ||
                       (exp[i] == ']' && pop() != '[') ||
                       (exp[i] == '}' && pop() != '{')) 
            {
                return 0;
            }
        }
    }
    return isEmpty();
}
 
int main() 
{
    char exp[100];
    printf("Enter an expression: ");
    scanf("%s", exp);
    if (isBalanced(exp)) 
    {
        printf("The expression has balanced parenthesis\n");
    } 
    else 
    {
        printf("The expression does not have balanced parenthesis\n");
    }
}  