// char in half is same in other half

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s, s1, s2;
    cin >> s;

    int m, l;
    l = s.length();
    if (l % 2 == 0)
    {
        m = l / 2;
        s1 = s.substr(0, m);
        s2 = s.substr(m, l + 1);
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }
    else
    {
        m = l / 2;
        s1 = s.substr(0, m);
        s2 = s.substr(m + 1, l + 1);
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }
}
int main()
{

    int t;
    cin >> t;

    for (int T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}
