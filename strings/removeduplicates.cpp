#include<bits/stdc++.h>

using namespace std;

string dup(string s){
    if(s.length()==0){
        return "";
    }

    char ch=s[0];
    string ans = dup(s.substr(1));

    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}


int main(){
    string a;
    cin>>a;
    cout<<dup(a);

    return 0;
}