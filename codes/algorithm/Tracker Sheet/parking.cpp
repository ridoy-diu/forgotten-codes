#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int position;
        int max = -1;
        int min = 99;
        for (int i = 0; i < n; i++)
        {
            cin >> position;
            if (max <= position)
            {
                max = position;
            }
            if (min > position)
            {
                min = position;
            }
        }
        int min_distance = (max - min) * 2;
        cout << min_distance << endl;
    }
    return 0;
}