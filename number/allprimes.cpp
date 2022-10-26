#include <iostream>
using namespace std;

int main()
{

    long long low;
    long long high=INT64_MAX;
    long long i;
    bool is_prime = true;

    low = 0;

    cout << "\nPrime numbers" << " are: " << endl;
    cout<<"1 , ";

    while (low < high)
    {
        is_prime = true;

        if (low == 0 || low == 1)
        {
            is_prime = false;
        }

        for (i = 2; i <= low / 2; ++i)
        {
            if (low % i == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
            cout << low << ", ";

        ++low;
    }
    return 0;
}