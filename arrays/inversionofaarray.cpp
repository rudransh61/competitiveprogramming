/*Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum.
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{

    // Time Complexity: O(N^2)
private:
    long long solution1(long long arr[], long long N)
    {
        long long sum = 0;
        for (long long i = 0; i < N; i++)
        {
            long long count = 0;
            for (long long j = 0; j < i; j++)
            {
                if (arr[i] < arr[j])
                    count++;
            }
            sum += count;
        }
        return sum;
    }

    // Time Complexity: O(N*logN))
private:
    long long merge(long long arr[], long long start, long long mid, long long end)
    {
        long long m = mid - start + 1;
        long long n = end - mid;

        long long left[m], right[n];

        for (long long i = 0; i < m; i++)
            left[i] = arr[start + i];

        for (long long i = 0; i < n; i++)
            right[i] = arr[mid + i + 1];

        long long i, j;
        i = j = 0;
        long long idx = start;
        long long count = 0;
        while (i < m && j < n)
        {
            if (left[i] <= right[j])
                arr[idx] = left[i++];
            else
            {
                arr[idx] = right[j++];
                count += m - i;
            }
            idx++;
        }

        while (i < m)
            arr[idx++] = left[i++];

        while (j < n)
            arr[idx++] = right[j++];

        return count;
    }

private:
    long long mergeSort(long long arr[], long long start, long long end)
    {
        long long count = 0;
        if (start < end)
        {
            long long mid = (start + end) / 2;
            count += mergeSort(arr, start, mid);
            count += mergeSort(arr, mid + 1, end);
            count += merge(arr, start, mid, end);
        }

        return count;
    }

public:
    long long int inversionCount(long long arr[], long long N)
    {
        return mergeSort(arr, 0, N - 1);
    }
};