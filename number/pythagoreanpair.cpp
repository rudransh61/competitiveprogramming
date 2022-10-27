#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int ans = 0, j, p, c = 0;
        while (n % 2 == 0)
        {
            n /= 2;
            c++;
        }
        if (c % 2 != 0)
        {
            n *= 2;
            c--;
        }
        for (long long i = 0; i * i <= n; ++i)
        {
            long long m = n - i * i;
            int k = sqrt(m);
            int l = k * k;
            if (l == m)
            {
                j = i;
                p = k;
                ans++;
            }
        }
        for (int i = 0; i < c; i += 2)
        {
            p *= 2;
            j *= 2;
        }
        if (ans)
            cout << p << " " << j << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}