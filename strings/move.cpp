#include<bits/stdc++.h>

using namespace std;

string move(string s){
    if(s.length()==0) return "";
    char ch=s[0];

    string ans = move(s.substr(1));

    if(ch=='x'){
        return ans+ch ;
    }
    return ch+ans;
}

int main(){
    string a;
    cin>>a;
    cout<<move(a);

    return 0;
}