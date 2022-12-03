#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

// Function to generate a convolution
// array of two given arrays
void findConvolution(const vector<int> &a,
                     const vector<int> &b)
{
    // Stores the size of arrays
    int n = a.size(), m = b.size();

    // Stores the final array
    vector<long long> c(n + m - 1);

    // Traverse the two given arrays
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {

            // Update the convolution array
            c[i + j] += 1LL * (a[i] * b[j]) % MOD;
        }
    }

    // Print the convolution array c[]
    for (int k = 0; k < c.size(); ++k)
    {
        c[k] %= MOD;
        cout << c[k] << " ";
    }
}

int main()
{
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {5, 6, 7, 8, 9};

    findConvolution(A, B);

    return 0;
}