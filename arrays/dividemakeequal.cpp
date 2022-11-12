#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int g = 0;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            g = __gcd(g, a[i]);
            m[a[i]]++;
        }
        cout << n - m[g] << endl;
    }
    return 0;
}