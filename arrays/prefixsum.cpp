#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int ar[n] = {1, 2, 3, 4, 5};
    int prefix[5];
    prefix[0] = ar[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << prefix[n] << " ";
    }
    return 0;
}