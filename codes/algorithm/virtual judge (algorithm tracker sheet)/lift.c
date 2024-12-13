#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int text_cases = 1; text_cases <= n; text_cases++)
    {
        int your_positon, postion_of_lift;
        scanf("%d %d", &your_positon, &postion_of_lift);

        int time = 4 * abs(your_positon - postion_of_lift) + 4 * your_positon + 19;

        printf("Case %d: %d\n", text_cases, time);
    }
    return 0;
}