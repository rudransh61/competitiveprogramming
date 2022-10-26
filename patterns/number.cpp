#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int c1,c2;
    c1=1;
    c2=1;
    cin>>n;
    //down
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<c1;
            c1++;
        }
        cout<<endl;
    }

    //up
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<c2;
            c2++;
        }
        cout<<endl;
    }

    return 0;
}
