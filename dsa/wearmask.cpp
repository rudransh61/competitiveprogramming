#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int f = abs(x - y);
    int d = min(f, y);
    cout << d << endl;
    return 0;
}
// number of mask needed