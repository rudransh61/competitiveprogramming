#include<bits/stdc++.h>

using namespace std;

int main(){


    return 0;
}
    long long int maxSumLCM(int n) 
    {
        long long int ans = 0;
        
        for(int i=1; i*i<=n; i++)
		if(n%i == 0)
		{
			if(n/i == i)
				ans += i;
			else
				ans += i + (n/i);
		}
        
        return ans;
    }
