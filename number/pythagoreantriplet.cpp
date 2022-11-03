#include<bits/stdc++.h>

using namespace std;

int py(int x,int y,int z){
    int a=max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;c=z;
    }
    else if(a==y){
        b=x;c=z;
    }
    else{
        b=x;c=y;
    }
    if(a*a==b*b+c*c){
        return true;
    }
    return false;
}

int main(){
    int p=3,q=4,r=5;
    cout<<py(p,q,r)<<endl;

    return 0;
}