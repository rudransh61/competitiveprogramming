#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int g[n];
    for (int i = 0; i < n; i++)
    {
        cin >> g[i];
    }
    int c[n];
    for (int i = 0; i < n; i++)
    {
        if (i < n + 1 - k)
        {

            int e = 0;
            for (int j = i; j < i + k; j++)
            {
                e = e + g[j];
            }
            c[i] = e;
        }
    }
    sort(c, c + n + 1 - k);
    cout << c[n - k] << endl;
    return 0;
}