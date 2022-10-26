#include<bits/stdc++.h>

using namespace std;

int main(){
    // swap numbers
    int a = 1;
    int b = 2;
    a = a^b;
    b ^ b^a;
    a = a^b;
    cout<<a<<" "<<b<<endl;

    //only non repeating number (all are even number times)
    int n=19;
    int arr[n]={9,1,2,2,8,5,6,9,6,4,3,5,7,8,3,1,4};
    int temp = 0;
    for(int i=0; i<n; i++){
        temp^=arr[i];
    }
    cout<<temp<<endl;
    return 0;
}