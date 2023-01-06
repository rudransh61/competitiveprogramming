#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool palcheck(int x)
{
    int rev = 0;
    int org = x;
    while (x > 0)
    {
        int lst = x % 10;
        rev = rev * 10 + lst;
        x /= 10;
    }
    if (rev == org)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int sum = 0;
        for (int i = l; i <= r; i++)
        {
            if (palcheck(i))
            {
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}