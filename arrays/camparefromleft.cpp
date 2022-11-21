#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, X;
        cin >> N >> X;
        int i1 = -1;
        int a[N];
        int i;
        for (i = 0; i < N; i++)
        {
            cin >> a[i];
            if (a[i] < X)
            {
                i1 = i;
            }
        }
        cout << i1 + 1 << endl;
    }
    return 0;
}