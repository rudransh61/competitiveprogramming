// convert binary to decimal

#include <iostream>
#include <cmath>

using namespace std;

// function prototype
int convert(long long);
int convert1(long long);

int main()
{
    long long n;
    cout << "Enter a binary number: ";
    cin >> n;
    cout << n << " in binary = " << convert(n) << " in decimal"<<endl;
    cout << n << " in decimal = " << convert1(convert(n)) << " in binary";
    return 0;
}

// function definition
int convert(long long n)
{
    int dec = 0, i = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }

    return dec;
}

int convert1(long long n)
{
    long long bin = 0;
    int rem, i = 1;

    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}