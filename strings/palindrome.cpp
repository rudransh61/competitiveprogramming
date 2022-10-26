#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string S)
{
    string P = S;

    reverse(P.begin(), P.end());

    if (S == P)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

string makespalin(string S){
    string P = S;

    reverse(P.begin(), P.end());

    S += P;
    return S;
}


int main()
{
    string S = "ABCDCBA";
    string SS = "ABCDCBAA";
    cout << isPalindrome(S);
    cout << isPalindrome(SS);
    cout << makespalin(S);
    cout << makespalin(SS);

    return 0;
}