#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin>>n;
    //down
    for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                cout<<"*";
            }
            cout<<endl;
    }

    //up
    for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<"*";
            }
            cout<<endl;
    }

    return 0;
}
