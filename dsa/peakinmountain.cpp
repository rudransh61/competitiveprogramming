#include<vector>
#include<iostream>
using namespace std;

int find_pivot(vector<int> v) {
	int s = 0, e = v.size() - 1;
	int mid=(s + e) / 2;
	while (s < e)
	{
		if(v[mid] < v[mid+1])
            s=mid+1;
    	else{
            e = mid;
        }
		mid = (s + e) / 2;
	}
    cout<<s<<endl;
	return s;
}
int main() {
    vector<int> arr;
    arr={1,2,3,10,8,0,-69};

    return find_pivot(arr);
}

// p92
