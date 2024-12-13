// longest common subsequence

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int dp[1005][1005];

int lcs(int i, int j, string &s1, string &s2)
{
    if (i < 0 || j < 0)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    // remove 1 char from s1
    int ans = lcs(i - 1, j, s1, s2);

    // remove 1 char from s2
    ans = max(ans, lcs(i, j - 1, s1, s2));

    // remove 1 char from s1 ans s2
    ans = max(ans, lcs(i - 1, j - 1, s1, s2) + (s1[i] == s2[j]));

    return dp[i][j] = ans;
}

int longest_common_subsequence(string s1, string s2)
{
    memset(dp, -1, sizeof(dp));
    return lcs(s1.size() - 1, s2.size() - 1, s1, s2);
}

int main(void)
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << longest_common_subsequence(s1, s2);

    return 0; 
}