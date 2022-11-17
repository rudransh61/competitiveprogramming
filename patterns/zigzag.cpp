#include <iostream>
using namespace std;

// Function to print the zigzag pattern
void printPattern(int n)
{
    int var1, var = 1;

    for (int i = 1; i <= n; i++)
    {
        // for odd rows
        if (i % 2 != 0)
        {
            // calculate starting value
            var = var + i - 1;
            for (int j = 1; j <= i; j++)
            {
                if (j == 1)
                {
                    cout << var;
                }
                else
                    cout << "*" << var;

                var++;
            }
        }
        else // for even rows
        {
            var1 = var + i - 1; // calculate starting value
            for (int j = 1; j <= i; j++)
            {
                if (j == 1)
                {
                    // print without star
                    cout << var1;
                }
                else
                {
                    // print with star
                    cout << "*" << var1;
                }
                var1--;
            }
        }
        cout << endl;
    }
}

// Driver code
int main()
{
    int n = 5;

    printPattern(n);

    return 0;
}