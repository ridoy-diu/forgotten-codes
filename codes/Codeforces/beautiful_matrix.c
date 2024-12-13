#include <stdio.h>
#include <math.h>

int main()
{
    int i, j;
    int row, col, moves;
    int matrix[5][5];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                row = i;
                col = j;
                break;
            }
        }
    }

    moves = abs(row - 2) + abs(col - 2);

    printf("%d\n", moves);

    return 0;
}