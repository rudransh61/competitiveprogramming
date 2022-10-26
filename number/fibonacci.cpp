#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int fibo(long long a,long long b){
    cout<<a+b<<endl;
    fibo(b,a+b);
}

int main(){
    long long a1=0;
    long long a2 = 1;
    fibo(a1,a2);
    return 0;
}