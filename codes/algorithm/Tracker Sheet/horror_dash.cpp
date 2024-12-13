#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int max = 0;
        for (int i = 1; i <= n; i++)
        {
            int speed;
            cin >> speed;
            if (speed >= max)
            {
                max = speed;
            }
        }
        cout << "Case " << i << ": " << max << endl;
    }
    return 0;
}