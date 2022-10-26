#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int r=int(sqrt(n));
    for(int i=2;i<=r;i++){
        if(n%i==0){
            int c;
            while(n%i==0){
                n/=i;
                c++;
            }
            cout<<i<<'^'<<c<<endl;
        }
    }
    if(n>1) cout<<n<<'^'<<1<<endl;

    return 0;
}