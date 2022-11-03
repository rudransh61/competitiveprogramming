#include <iostream>
using namespace std;

int main()
{

    int n = 2, m = 2;
    int a[n][m] = {{2, 5}, {1, 7}};
    int b[n][m] = {{3, 7}, {2, 9}};

    int c[n][m];
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
}