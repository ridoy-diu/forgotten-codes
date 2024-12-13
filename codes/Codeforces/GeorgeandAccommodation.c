#include<stdio.h>

int main()
{
    int n, p, q;
    scanf("%d", &n);
    
    int c = 0;
    while (n--)
    {
    scanf("%d %d", &p, &q);
    int space = q-p;
    if(space >= 2)
    c++;
    }

    printf("%d\n", c);
    
    return 0;
}