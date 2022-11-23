#include <bits/stdc++.h>
using namespace std;

// union
char dist[100000];
// Function to return the count of number of elements in union of two arrays.
void getUnion(int a[], int n, int b[], int m)
{

    // Defining set container s
    set<int> s;

    // Inserting array elements in s
    for (int i = 0; i < n; i++)
        s.insert(a[i]);

    for (int i = 0; i < m; i++)
        s.insert(b[i]);
    cout << "Number of elements after union operation: "<< s.size() << endl;
    cout << "The union set of both arrays is :" << endl;
    for (auto itr = s.begin(); itr != s.end(); itr++)
        cout << *itr << " "; // s will contain only distinct
                             // elements from array a and b
}




// intersection

void intersection(int a[], int b[], int n, int m)
{
    int i = 0, j = 0, k = 0;
    int* result = new int[n + m];
    while (i < n && j < m) {
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else {
            if (k != 0 && a[i] == result[k - 1]) {
                i++;
                j++;
            }
            else {
                result[k] = a[i];
                i++;
                j++;
                k++;
            }
        }
    }
}