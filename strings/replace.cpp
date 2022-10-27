#include<bits/stdc++.h>

using namespace std;

void repl(string s){
    if(s.length()==0) return;

    if(s[0] =='p' && s[1] =='i'){
        cout<<"3.1415907";
        repl(s.substr(2));
    }

    else{
        cout<<s[0];
        repl(s.substr(1));
    }
}

int main(){
    string a;
    cin>>a;
    repl(a);

    return 0;
}