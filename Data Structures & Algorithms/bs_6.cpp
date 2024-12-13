// finding next alphabetical element

#include <bits/stdc++.h>
using namespace std;

char solve(string s, char ch, int n)
{
    int l = 0, r = n - 1;
    char ans;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (s[mid] > ch)
        {
            ans = s[mid];
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return ans;
}

int main(void)
{
    string s;
    cin >> s;
    char ch;
    cin >> ch;

    char ans = solve(s, ch, s.size());
    cout << ans << endl;
    return 0;
}