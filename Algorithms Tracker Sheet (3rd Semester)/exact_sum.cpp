#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int x;
        vector<int> price;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            price.push_back(x);
        }

        int m;
        cin >> m;

        sort(price.begin(), price.end());

        int a, b, min = INT_MAX;

        for (int i = 0; i < price.size(); i++)
        {
            for (int j = i + 1; j < price.size(); j++)
            {
                if (price[i] + price[j] == m)
                {
                    if (min > price[j] - price[i])
                    {
                        a = price[i];
                        b = price[j];
                        min = price[j] - price[i];
                    }
                }
            }
        }

        cout << "Peter should buy books whose prices are " << a << " and " << b << "." << endl;
        cout << endl;
    }

    return 0;
}
