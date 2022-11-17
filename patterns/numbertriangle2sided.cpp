// C++ implementation to print
// the given pattern
#include <bits/stdc++.h>
using namespace std;

// Function to find the sum of
// N integers from 1 to N
int sum(int n)
{
    return n * (n - 1) / 2;
}

// Function to print the given
// pattern
void BSpattern(int N)
{
    int Val = 0, Pthree = 0,
        cnt = 0, initial;

    string s = "  ";

    // Iterate over [0, N - 1]
    for (int i = 0; i < N; i++)
    {
        cnt = 0;

        // Sub-Pattern - 1
        if (i > 0)
        {
            cout << s;
            s += "  ";
        }

        // Sub-Pattern - 2
        for (int j = i; j < N; j++)
        {

            // Count the number of element
            // in rows and sub-pattern 2 and 3
            // will have same rows
            if (i > 0)
            {
                cnt++;
            }
            // Increment Val to print the
            // series 1, 2, 3, 4, 5 ...
            cout << ++Val;
            cout << " ";
        }

        // To get the first element of sub
        // pattern 3 find the sum of first N-1
        // elements first N-1 elements in row1
        // previous of Sub-Pattern 2

        // Finally, add the (N-1)th element
        // i.e., 5 and increment it by 1
        if (i == 0)
        {
            int Sumbeforelast = sum(Val) * 2;
            Pthree = Val + Sumbeforelast + 1;
            initial = Pthree;
        }

        // Initial is used to give the initial
        // value of the row in Sub-Pattern 3
        initial = initial - cnt;

        Pthree = initial;

        // Sub-Pattern 3
        for (int k = i; k < N; k++)
        {

            cout << Pthree++;

            // Skip printing zero at the last
            if (k != N - 1)
            {
                cout << 0;
            }
        }

        cout << "\n";
    }
}

// Driver Code
int main()
{
    // Given N
    int N = 5;

    // Function Call
    BSpattern(N);
    return 0;
}