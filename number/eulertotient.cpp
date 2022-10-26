#include<bits/stdc++.h>

using namespace std;
const int N = 1e7+7;


int main(){
    int t[N];
    for (int i=0; i<N; i++){
        t[i]=i;
    }
    for (int i=2; i<N;i++){
        if (t[i]==i){
            for (int j=2*i; j<N ; j+=1){
                t[j]*=i-1;
                t[j]/=i;
            }
            t[i]=i-1;
        }
    }
    for (int i=2; i<N; i++){
        cout<<t[i]<<endl;
    }

    return 0;
}