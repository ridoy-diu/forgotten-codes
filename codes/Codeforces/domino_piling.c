#include<stdio.h>

int main()
{
    int m, n;
    int area, piece;

    scanf("%d %d", &m, &n);

    area = m * n;
    piece = area / 2;

    printf("%d\n", piece);

    return 0;
}