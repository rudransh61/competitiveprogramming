#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"----------------------"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //max
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl;

    //min
    int min = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<min<<endl;
    return 0;
}