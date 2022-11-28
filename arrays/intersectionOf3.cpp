#include <bits/stdc++.h>

using namespace std;

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)

{
    int i = 0, j = 0, k = 0;
    set<int> ans;
    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            ans.insert(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] <= B[j] && A[i] <= C[k])
            i++;
        else if (B[j] <= A[i] && B[j] <= C[k])
            j++;
        else
            k++;
    }
    vector<int> result{};
    std::copy(ans.begin(), ans.end(), std::back_inserter(result));
    return result;
}