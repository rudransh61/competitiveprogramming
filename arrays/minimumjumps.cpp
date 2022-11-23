/*Given an array of N integers arr[] where each element represents the max length of the jump that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.*/


#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
{
    if (n == 1)
        return 0;
    if (arr[0] == 0)
        return -1;
    int jump = 0, pos = 0, des = 0;
    for (int i = 0; i < n - 1; i++)
    {
        des = max(des, arr[i] + i);
        if (pos == i)
        {
            pos = des;
            jump++;
        }
    }
    if (des < n - 1)
        return -1;
    return jump;
}