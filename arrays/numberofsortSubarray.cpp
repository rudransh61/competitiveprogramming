//Step 1 :- We Just fix the middle elements and try to find count of smaller element to its left,and larger element to its right.
//Step 2 :- Multiply this two count and add to our answer.
#include <bits/stdc++.h>
using namespace std;

int countTriplets(vector<int>nums){
	    // Code here.
	    int ans=0;
	    for(int j=0;j<nums.size();j++) {
	        int small =0;
	        for(int i=0;i<j;i++) {
	            if(nums[i]<nums[j]) small++;
	        }
	        
	        int large =0;
	        for(int k=j+1;k<nums.size();k++) {
	            if(nums[j]<nums[k]) large++;
	        }
	        ans+=(small*large);
	    }
	    return ans;
	}