#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    //makes
    int n , ans=0 ,remain;
    cin>>n;
    while(n!=0){
        remain = n%10;
        ans = ans*10+remain;
        n /= 10;
    }
    cout<<ans<<endl;

    //check
    if(ans==n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}