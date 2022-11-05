#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Program to subtract two binary numbers
void Subtract(int n, int a[], int b[])
{

    // 1's Complement of the subtrahend
    for (int i = 0; i < n; i++)
    {

        // Replace 1 by 0
        if (b[i] == 1)
        {
            b[i] = 0;
        }

        // Replace 0 by 1
        else
        {
            b[i] = 1;
        }
    }

    // Add 1 at end to get 2's Complement of the subtrahend
    for (int i = n - 1; i >= 0; i--)
    {
        if (b[i] == 0)
        {
            b[i] = 1;
            break;
        }
        else
        {
            b[i] = 0;
        }
    }

    // Represents carry
    int t = 0;
    for (int i = n - 1; i >= 0; i--)
    {

        // Add a, b and carry
        a[i] = a[i] + b[i] + t;

        // If a[i] is 2
        if (a[i] == 2)
        {
            a[i] = 0;
            t = 1;
        }

        // If a[i] is 3
        else if (a[i] == 3)
        {
            a[i] = 1;
            t = 1;
        }
        else
            t = 0;
    }

    cout << endl;

    // If carry is generated
    // discard the carry
    if (t == 1)
    {

        // print the result
        for (int i = 0; i < n; i++)
        {

            // Print the result
            cout << a[i];
        }
    }

    // if carry is not generated
    else
    {

        // Calculate 2's Complement
        // of the obtained result
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                a[i] = 0;
            else
                a[i] = 1;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 0)
            {
                a[i] = 1;
                break;
            }
            else
                a[i] = 0;
        }

        // Add -ve sign to represent
        cout << "-";

        // -ve result
        // Print the resultant array
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
    }
}


string addBinary(string A, string B)
{
    // If the length of string A is greater than the length
    // of B then just swap the string by calling the
    // same function and make sure to return the function
    // otherwise recursion will occur which leads to
    // calling the same function twice
    if (A.length() > B.length())
        return addBinary(B, A);

    // Calculating the difference between the length of the
    // two strings.
    int diff = B.length() - A.length();

    // Initialise the padding string which is used to store
    // zeroes that should be added as prefix to the string
    // which has length smaller than the other string.
    string padding;
    for (int i = 0; i < diff; i++)
        padding.push_back('0');

    A = padding + A;
    string res;
    char carry = '0';

    for (int i = A.length() - 1; i >= 0; i--)
    {
        // This if condition solves 110 111 possible cases
        if (A[i] == '1' && B[i] == '1')
        {
            if (carry == '1')
                res.push_back('1'), carry = '1';
            else
                res.push_back('0'), carry = '1';
        }
        // This if condition solves 000 001 possible cases
        else if (A[i] == '0' && B[i] == '0')
        {
            if (carry == '1')
                res.push_back('1'), carry = '0';
            else
                res.push_back('0'), carry = '0';
        }
        // This if condition solves 100 101 010 011 possible
        // cases
        else if (A[i] != B[i])
        {
            if (carry == '1')
                res.push_back('0'), carry = '1';
            else
                res.push_back('1'), carry = '0';
        }
    }

    // If at the end there is carry then just add it to the
    // result
    if (carry == '1')
        res.push_back(carry);
    // reverse the result
    reverse(res.begin(), res.end());

    // To remove leading zeroes
    int index = 0;
    while (index + 1 < res.length() && res[index] == '0')
        index++;
    return (res.substr(index));
}