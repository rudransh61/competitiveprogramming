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

//or
#include<iostream>
using namespace std;

void reverse(string& str, int i, int j ) {

    cout << "call recieved for " << str << endl;

    //base case
    if(i>j)
        return ;

    swap(str[i], str[j]);
    i++;
    j--;

    //Recursive call
    reverse(str,i,j);

}

int main() {

    string name = "abcde";
    cout << endl;
    reverse(name, 0 , name.length()-1 );
    cout << endl;
    cout << name << endl;

    return 0;
}