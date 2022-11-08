#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    //makes
    int n , ans=0 ,remain;
    cin>>n;
    while(n!=0){
        remain = n%10;
        ans = ans*10+remain;
        n /= 10;
    }
    cout<<ans<<endl;

    //check
    if(ans==n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

//check
#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int  j) {

    //base case
    if(i>j)
        return true;

    if(str[i] != str[j])
        return false;
    else{
        //Recursive call
        return checkPalindrome(str, i+1,j-1);
    }
}

int main() {

    string name = "BookkooB";
    cout << endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length()-1 );

    if(isPalindrome) {
        cout << "Its a Palindrome " << endl; 
    }
    else {
        cout << "Its not a Palindrome " << endl;
    }


    return 0;
}