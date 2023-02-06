
// C++ program to reduce a fraction x/y
// to its lowest form

#include <bits/stdc++.h>
using namespace std;

// Function to reduce a fraction to its lowest form
void reduceFraction(int x, int y)
{
    int d;
    d = __gcd(x, y);

    x = x / d;
    y = y / d;

    cout << "x = " << x << ", y = " << y << endl;
}

// Driver Code
int main()
{
    int x = 16;
    int y = 10;

    reduceFraction(x, y);

    return 0;
}