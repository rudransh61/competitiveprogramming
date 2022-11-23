/*Approach
What we are going to do is first we will push the first interval in the vector and will iterate over all the other intervals in the array.

considering each interval[a,b] in the array we will check if the start of the interval is smaller than the end of the last interval[x,y] present in our vector i.e. y>a
if it is so then we will update the end value we will update the end value y with max(y,b)

if y!>a then we will simply push the interval in the vector

follow the same steps for rest of the array elements and return the vector after reaching at the end*/

#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        if(intervals.size()<=1) return intervals;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            if(ans.back()[1] >= intervals[i][0]) ans.back()[1] = max(ans.back()[1] , intervals[i][1]);
            else ans.push_back(intervals[i]); 
        }
        return ans;
    }
