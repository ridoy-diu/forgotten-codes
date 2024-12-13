#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    long long int p;
    vector<int> h;

    cin >> n >> p;

    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        h.push_back(x);
    }

    

    for (int i = 0; i < n - 2; i++)
    {
        if (h[i] < h[i + 1])
            p = p - (h[i + 1] - h[i]);
        else if (h[i] > h[i + 1])
            p = p + (h[i] - h[i + 1]);
    }

    long long int last = abs(h[n - 1] - h[n - 2]);

    if (p >= last)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
