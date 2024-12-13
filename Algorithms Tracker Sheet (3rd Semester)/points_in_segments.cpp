#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long n, q;
        cin >> n >> q;

        vector<long long> points(n);
        for (int i = 0; i < n; i++)
        {
            cin >> points[i];
        }

        cout << "Case " << i << ":" << endl;

        while (q--)
        {
            long long a, b;
            cin >> a >> b;

            auto low = lower_bound(points.begin(), points.end(), a);
            auto high = upper_bound(points.begin(), points.end(), b);

            int count = distance(low, high);
            cout << count << endl;
        }
    }
    return 0;
}