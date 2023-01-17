// C++ code to implement the approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum sum
int findMaxSum(vector<int> arr, int N)
{
    // Declare dp array
    int dp[N][2];
    if (N == 1)
    {
        return arr[0];
    }

    // Initialize the values in dp array
    dp[0][0] = 0;
    dp[0][1] = arr[0];

    // Loop to find the maximum possible sum
    for (int i = 1; i < N; i++)
    {
        dp[i][1] = dp[i - 1][0] + arr[i];
        dp[i][0] = max(dp[i - 1][1],
                       dp[i - 1][0]);
    }

    // Return the maximum sum
    return max(dp[N - 1][0], dp[N - 1][1]);
}

// Driver Code
int main()
{
    // Creating the array
    vector<int> arr = {5, 5, 10, 100, 10, 5};
    int N = arr.size();

    // Function call
    cout << findMaxSum(arr, N) << endl;
    return 0;
}
