#include <bits/stdc++.h>

using namespace std;

int main()
{
// pair sum == pairs in array which has sum equals to the key
    int s;
    cin>>s;
    vector<vector<int>> ans;
    vector<int> arr;
    vector<int> temp;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<endl;
        }
    }
    return 0;
    }