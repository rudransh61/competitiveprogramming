#include <bits/stdc++.h>
using namespace std;

int insertSorted(int arr[], int n, int key, int capacity)
{
    if (n >= capacity)
        return n;

    int i;
    for (i = n - 1; (i >= 0 && arr[i] > key); i--)
        arr[i + 1] = arr[i];

    arr[i + 1] = key;

    return (n + 1);
}

int main()
{
    int arr[20] = {0,1,2,3,4,6,7,8,9,10,11,12};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 12;
    int i, key =5;

    cout << "\nBefore Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    n = insertSorted(arr, n, key, capacity);

    cout << "\nAfter Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}