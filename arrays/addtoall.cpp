#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,num,len;
    cin>>n>>m>>len>>num;
    long long int ar[len];
    while(m--){
        int a,b,d;
        cin>>a>>b>>d;
        ar[a]+=d;
        ar[b+1]-=d;
    }
    for(int i=0;i<=n;i++){
        ar[i]+=ar[i-1];
    }
    long long mx = -1;
    for(int i=0;i<=n;i++){
        if(mx<ar[i]){
            mx=ar[i];
        }
    }
    cout<<mx<<endl;

    return 0;
}