#include <iostream>
using namespace std;

/*Given an array of elements of length N, ranging from 0 to N – 1. All elements may not be present in the array. If the element is not present then there will be -1 present in the array. Rearrange the array such that A[i] = i and if i is not present, display -1 at that place.*/
// Function to transform the array
int *Rearrange(int *arr, int n)
{
    int c[n];
    for (int i = 0; i < n; i++)
    {
        c[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            c[arr[i]] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = c[i];
    }
    return arr;
}

// Driver Code
int main()
{
    int n, ar[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
    n = sizeof(ar) / sizeof(ar[0]);

    // Function Call
    Rearrange(ar, n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}
