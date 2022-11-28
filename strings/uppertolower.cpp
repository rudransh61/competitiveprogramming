#include<bits/stdc++.h>

using namespace std;

int main(){
    char str1;
    char str2;
    cin>>str1;
    cin>>str2;

    //lower to upper
    cout<<char(str1 & (~(1<<5)))<<endl;

    //upper to lower
    cout<<char(str2 | (1<<5))<<endl;

    return 0;
}

//op code by me :)