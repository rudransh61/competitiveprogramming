#include<bits/stdc++.h>

using namespace std;

int main(){
    int bin;
    cin>>bin;
    int i ,val ;
    cin>>i;
    //set bit at index i
    cout<<'set bit'<<(bin|1<<i)<<endl;

    //clear bit at index i
    cout<<'clear bit'<<(bin&~(1<<i))<<endl;

    //check bit at index i
    if (bin&(1<<i)!=0){
        val = 1;
    }
    else{
        val = 0;
    }
    //flip bit at index i
    cout<<'flip bit'<<(bin&~(1<<i)|(val<<i))<<endl;

    return 0;
}