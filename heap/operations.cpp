#include <bits/stdc++.h>

using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void insertNode(int arr[], int &n, int Key)
{
    n = n + 1;
    arr[n - 1] = Key;
    heapify(arr, n, n - 1);
}

void deleteRoot(int arr[], int &n)
{
    int lastElement = arr[n - 1];
    arr[0] = lastElement;
    n = n - 1;
    heapify(arr, n, 0);
}

int main()
{

    return 0;
}