#include <iostream>
using namespace std;
int gcd(int m, int n)
{
    if(m%n==0) return n;
    return gcd(n,m%n);
}
int main(int argc, char **argv)
{
    int m, n;
    cin >> m >> n;
    cout << gcd(m, n) << endl;
    cout << m*n/gcd(m, n) << endl;
    return 0;
}