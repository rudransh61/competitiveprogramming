#include <bits/stdc++.h>
using namespace std;
#define N 1e+5

int fib(int n,vector<int>&dp)
{
    if (n <= 1)
        return n;
    if(dp[n]==-1){
        return dp[n];
    }
    return dp[n]=fib(n - 1) + fib(n - 2);
}

int countWays(int s)
{
    return fib(s + 1);
}

int main()
{
    int s = 4;
    vector<int>dp(N,-1);
    cout << "Number of ways = " << countWays(s,dp);

    return 0;
}