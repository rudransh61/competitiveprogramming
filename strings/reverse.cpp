#include<bits/stdc++.h>

using namespace std;

void rev(string s){
    if(s.length()==0) return;
    string ros = s.substr(1);
    rev(ros);
    cout<<s[0];
}

int main(){
    string a;
    cin>>a;
    rev(a);
    return 0;
}