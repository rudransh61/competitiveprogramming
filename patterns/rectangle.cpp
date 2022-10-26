#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int r,c;
    cin>>c>>r;
    // complete
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //hollow

    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            if(i==0 || i==c-1 || j==0 || j==r-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}