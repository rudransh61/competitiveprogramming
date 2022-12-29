#include <bits/stdc++.h>
using namespace std;

int fiboMemo(vector<int> &dp, int n)
{
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    dp[n] = fiboMemo(dp, n - 1) + fiboMemo(dp, n - 2);
    return dp[n];
}

int main()
{
    int n = 100;
    vector<int> dp(n + 1, -1);
    cout << fiboMemo(dp, 10);
    return 0;
}