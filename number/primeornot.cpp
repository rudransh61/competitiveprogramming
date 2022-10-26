#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{

    int i, n;
    bool is_prime = true;

    cout << "Enter a positive integer: ";
    cin >> n;
    if (n == 0 || n == 1)
    {
        is_prime = false;
    }
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";

    return 0;
}
