
#include <iostream>
using namespace std;

void swapAlternate(int *array, int size)
{
    int i = 1;
    while (i < size)
    {
        int temp = array[i];
        array[i] = array[i - 1];
        array[i - 1] = temp;
        i = i + 2;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int *arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        swapAlternate(arr, size);
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        delete[] arr;
    }
}
